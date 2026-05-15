def sumofdigits(x):
    sum = 0
    temp = x
    while (temp > 0):
        last = temp % 10
        sum += last
        temp //=10
    return sum 


x = int(input("Please enter the value of x :"))
print(sumofdigits(x))
