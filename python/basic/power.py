
def power(x,y):
    # base case :
    if (y == 0):
        return 1
    
    half = power(x,y//2)
    
    # now lets check whether the y is even or odd 
    if (y % 2 == 0):
        result = half * half 
        return result
    else :
        result = half * half
        result = x * result
        return result 
    
x = int(input("Please enter the value of x: \n"))
y = int(input("Please enter the value of y:\n"))


print(power(x,y))