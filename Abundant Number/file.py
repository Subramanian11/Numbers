def abundant(n):
    sumval=0
    for i in range(1,n):
        if(n%i==0):
            sumval=sumval+i
    return 1 if(sumval>n) else 0 

num=int(input())
x=abundant(num)
print("Yes it's an Abundant Number") if(x==True) else print("No it's not an Abundant Number")
