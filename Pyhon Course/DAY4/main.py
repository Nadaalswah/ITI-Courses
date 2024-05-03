class Human:
    def __int__(self, name):
        self.name = name

    def speak(self):
        print("my name is "+self.name)



man = Human("nada")
man2=Human()
man.speak()







#     @classmethod
#     def makeFaults(cls):
#         cls.faults +=1
#         print(cls.faults)
#
#     @staticmethod
#     def mtemp(temp):
#         if (temp == 37):
#             print("normal")
#         else:
#             print("NotNormal")
#
# class employee :
#
#     def __int__(self, age):
#         self.__age=age
#     def __str__(self):
#         # return "my name is"+self.__age
#         return "my name is"
#     def __call__(self):
#         print("you call me ?")
#
#
# #me=Human(29)         #ask for this
# Human.makeFaults()
# man = Human()
# man.name = "ahmed"
# man.speak()
# man.makeFaults()
# man.mtemp(39)
#
# man2=employee()
#
# man2.city= "mans"
# #print(man2.name)
# print(man2)
# print(man2.city)
# man2()
# #print(man2.__name)
#
#
#
# named=lambda name:name+"nnnnn"
#
# print(named("ddddddddd"))
#
# def sumFn(n):
#     return lambda x:x+n
#
#
#
# print(sumFn(5)(3))
#
# l =[1,2,3,4,4,5]
# m = iter(l)
# print(next (m))
# print(next (m))
# print(next (m))
#
# t = map(lambda x:x+44, [1,3,5])
# for i in t:
#  print(i)
#
# it= filter(lambda x:x<10, [-15,-8,-5, 3, 5, 9, 25])
# for i in it:
#  print(i, end="    ")
