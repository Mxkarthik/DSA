def printnumber(i,n):
    if(i>n):
        return
    print(i,end=" ")
    printnumber(i+1,n)

printnumber(1,10)
