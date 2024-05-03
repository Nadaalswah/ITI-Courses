def fizzBuzz (num):
    if (isinstance(num, int)):

        if (num % 5 == 0 and num%3==0 ):
            print("fizzbuzz")

        elif(num%3==0):
            print("fizz")

        elif (num % 5 == 0):
            print("buzz")

    else:
         print("not valied input")



num=int(input("enter num please "))
fizzBuzz(num)
