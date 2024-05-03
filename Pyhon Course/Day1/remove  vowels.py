string = "Nada go to iti Every day"

vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
i = 0
for c in string:
    if c in vowels:
        string = string[:i] + string[i+1:]
        i = i-1
    i = i+1

print("After deleting Vowels : ", string)