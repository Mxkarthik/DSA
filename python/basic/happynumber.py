def power(x,y):
    if (y == 0 ):
        return 1 
    half = power(x,y//2)

    if ( y % 2 == 0):
        # even case 
        result = half * half
        return result
    else:
        result = half * half 
        result = x * result 
        return result 
    
frequency = []
def happynumber(x):
    if ( x in frequency):
        print("No this is not happy number")
        return False
    frequency.append(x)
    if ( x == 1):
        print("yes this is happy number")
        return True
    temp = x
    sum = 0
    while (temp > 0):
        last = temp % 10
        sum += power(last,2)
        temp //=10
         # Recursive case 

    return happynumber(sum)
    
x = int(input("Please enter the value of x:\n"))
happynumber(x)
