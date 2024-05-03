import re
regex = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,7}\b'
def checkUserInfo(name):
    while not name.isalpha():
        print("you must enter a valid name")
        name=input("please enter your name no space no digit and not empty")

    email=input("please enter your email")
    while not (re.fullmatch(regex, email)):
         print("Valid Email")
         email = input("please enter your email")
         print("Invalid Email")




name=input("please enter your name no space no digit and not empty")
checkUserInfo(name)