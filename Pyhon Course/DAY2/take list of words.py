'''def take_words():
    words_list=[]     #to hold words which user enter
    while True:
        word = input("")
        if word.lower() == 'done':
            break
        else:
            if word.isalpha():
                words_list.append(word)
            else:
                print(" Please enter a valid word.")

    print(words_list)


print("enter words please when you finish enter done")
take_words ()
'''