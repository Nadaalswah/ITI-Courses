def aray_gen_fun(start,length):
     if (isinstance(start,int) and isinstance(length,int) ):
          arr = list (range(start, start+length))
          print(arr)
     else:
          print("not valied input")



aray_gen_fun(1,5)