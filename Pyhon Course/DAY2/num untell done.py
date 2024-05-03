def take_num ():
    l=[]        #to hold nums which user rnter
    total = 0
    count = 0

    while True:
        num = input("")

        if num.lower() == 'done':
            break

        else:
            if num.isdigit():
                number = float(num)
                l.append(number)
                total =total +number
                count += 1
            else:
                print(" Please enter a valid number.")

    if count > 0:
        average = total / count
        print(l)
        print("Total= ",total)
        print("Count= ",count)
        print("Average= " ,average)
    else:
        print("you did not enter any number so,\nTotal= 0\nCount=0 \nAverage= 0")


print ("enter numbers when you finish enter done")
take_num ()
