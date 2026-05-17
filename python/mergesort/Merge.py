def Merge(m,n,num1,num2):
    i = 0
    j = 0
    temp = []
    while ( i <= m-1 and j <=n-1):
        if ( num1[i] <= num2[j]):
            temp.append(num1[i])
            i += 1
        else :
            temp.append(num2[j])
            j += 1
    while ( i <= m-1):
        temp.append(num1[i])
        i += 1
    while ( j <= n-1):
        temp.append(num2[j])
        j += 1
    for i in range ( 0 , len(temp)):
        num1[i] = temp [i]

print("Please enter the value of M : \n")
M = int(input())
print("Please enter the value of N : \n")
N = int(input())
print("Please enter the num1 list : \n")
num1 = []
for i in range (0,M+N):
    num1.append(int(input()))
print("Please enter the num2 list : \n")
num2 = []
for i in range (0,N):
    num2.append(int(input()))

Merge(M,N,num1,num2)
print(num1)

