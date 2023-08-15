def palindrome_check(n):
    num = str(n)
    z = len(num)
    i=0
    j=z-1
    while (i<z/2 and i<j):
        if num[i]==num[j]:
            i+=1
            j-=1
        else:
            print("false")
            return False
    print("True")
    return True

number = int(input("Enter your number: "))
palindrome_check(number)