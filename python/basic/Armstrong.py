def power(x,y):
    if(y==0):
        return 1
    half = power(x,y//2)

    if ( y % 2 == 0):
        result = half * half 
        return result 
    else:
        result = half * half 
        result = x * result
        return result 

def sizeof(x):
    temp = x
    count = 0
    while (temp > 0):
        temp //=10
        count += 1
    return count 

def armstrong(x):
    size = sizeof(x)
    temp = x
    sum = 0 
    while (temp > 0):
        last = temp % 10
        sum += power(last,size)
        temp //=10
    if(sum == x):
        return 1 
    else:
        return 0

x = int(input("Please enter the value that you want to check if:\n"))
flag = armstrong(x)
if (flag == 1):
    print("yes it is armstrong number")
else :
    print("No it it not armstrong number")