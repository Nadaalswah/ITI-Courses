import requests


class WeatherApiClient:
    def __init__(self, api_key):
        self.api_key = api_key
        self.base_url = 'https://api.weatherapi.com/v1/'

    def get_current_temperature(self, city):
        endpoint = f'current.json?key={self.api_key}&q={city}'
        response = self._make_request(endpoint)
        return response['current']['temp_c']

    def get_temperature_after(self, city, days, hour=None):
        endpoint = f'forecast.json?key={self.api_key}&q={city}&days={days}'
        response = self._make_request(endpoint)

        if hour:
            return response['forecast']['forecastday'][0]['hour'][hour]['temp_c']
        else:
            return response['forecast']['forecastday'][0]['day']['avgtemp_c']



    def get_lat_and_long(self, city):
        endpoint = f'search.json?key={self.api_key}&q={city}'
        response = self._make_request(endpoint)
        location = response[0]
        return location['lat'], location['lon']

    def _make_request(self, endpoint):
        try:
            url = f'{self.base_url}{endpoint}'
            response = requests.get(url)
            response.raise_for_status()
            return response.json()
        except requests.exceptions.HTTPError as err:
            print(f"HTTP error occurred: {err}")
        except Exception as e:
            print(f"An error occurred: {e}")

    @staticmethod
    def check_city(city):
        if city.isalpha()== True:
            return city
        else:
            print("not valid city name")
            return 0

    @staticmethod
    def check_day(days):
        if days.isdigit()==True:
            return days
        else:
            print("not valid days number")
            return 0



api_key = '5b66cc1c9f3244829c4100007231212'

weather_client = WeatherApiClient(api_key)

flag=0

while flag==0:
    input_city = input("Enter city name like 'Mansoura'")
    city = weather_client.check_city(input_city)
    if city == 0:
        flag=0
        print("try again")
    else:
        flag=1
flg=0
while flg==0:
    input_days = input("Enter number of days (1 : 14)")
    days=weather_client.check_day(input_days)
    if days == 0:
        flg=0
        print("try again")
    else:
        flg=1

current_temperature = weather_client.get_current_temperature(city)
print(f'Current temperature in {city}: {current_temperature}°C')

temperature_after_3_days = weather_client.get_temperature_after(city, days)
print(f'Temperature in {city} after {days} days: {temperature_after_3_days}°C')

lat, lon = weather_client.get_lat_and_long(city)
print(f'Latitude and Longitude of {city}: {lat}, {lon}')