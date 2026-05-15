def product(x):
    temp = x
    product = 1
    while ( temp > 0):
        last = temp % 10
        product *= last
        temp //= 10
    return product

x = int(input("Please enter the value of x:\n"))
print(product(x))
