def Merge (M,N,num1, num2):
    i = M-1
    j = N-1
    k = (M+N)-1
    while ( j >=0 and i >= 0):
        if (num2[j]>=num1[i]):
            num1[k] = num2[j]
            j -= 1            
        else :
            num1[k] = num1[i]
            i -= 1
        k -= 1
    while ( j >= 0):
        num1[k] = num2[j]
        j -= 1
        k -= 1
    return num1

print(Merge(3,3,[1,2,3,0,0,0],[2,5,6]))


