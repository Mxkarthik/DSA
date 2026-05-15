def pallindrome(x):
    reverse = 0
    temp = x 
    while ( temp > 0):
        last = temp % 10
        reverse = reverse * 10 + last
        temp //=10
    if ( x == reverse):
        print("yes it is pallindrome:\n")
    else :
        print("No it is not pallindrome:\n")      

x = int(input("Please enter the value of x:\n"))
pallindrome(x)      