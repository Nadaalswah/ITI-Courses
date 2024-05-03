def longest_substring (string):   #abcda

    longest = string[0]
    current = string[0]
    for vIndex in string[1:]: #b
        if vIndex >= current[-1]:
            current += vIndex
            if len(current) > len(longest):
                longest = current
        else:
            current = vIndex
    print("longest substring is " ,longest)


longest_substring("abcda")
