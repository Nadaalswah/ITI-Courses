import random


class Client:
    def __init__(self,locations):
        self.locations = {
            'Menoufia': {'lat': 30.43494, 'lon': 30.758713},
            'Kafr El-Sheikh': {'lat': 31.092456, 'lon': 31.092456},
            'Dakahlia': {'lat': 31.141365, 'lon': 31.141365},
            'Port Said': {'lat': 31.263761, 'lon': 30.758713},
            'Cairo': {'lat': 30.044668, 'lon': 31.235144},
            'Tanta': {'lat': 30.787503, 'lon': 30.999916}

        }

    def get_current_temperature(self, city):
        return random.uniform(20, 30)

    def get_temperature_after(self, city, days, hour=None):
        return random.uniform(20, 25)

    def get_lat_and_long(self, city):

        if city in self.locations:
            return self.locations[city]['lat'], self.locations[city]['lon']
        else:
            return f"Error: City '{city}' not found in the database."

    def get_whole_weather_data(self,loc,day=2,hour=0):
        current_temperature = client1.get_current_temperature(city=loc)
        print(f"Current Temperature: {current_temperature} °C")

        forecast_temperature = client1.get_temperature_after(city=loc, days=day, hours=hour)  # ask here
        print(f"Forecast Temperature: {forecast_temperature} °C")

        lat, lon = client1.get_lat_and_long(city=loc)
        print(f"Latitude: {lat}, Longitude: {lon}")



loc=input("enter your location ")

client1 = Client(loc)
choice=("if you want weather after m days and n hours enter Y"
        "if not enter N ")
flag=1
while flag==1 :
    if choice.lower() == "y":
       day=input("enter number of days : ")
       hour = input("enter number of hours : ")
       flag=0


    elif choice.lower() == "y":
        flag=0
    else:
        print("enter valid choice ")
        flag=1

client1.get_weather_data(loc)



