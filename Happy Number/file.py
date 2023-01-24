def happy(n):
    x=n 
    while(x!=1 and x!=4):
        sumval=0
        while(x>0):
            sumval=sumval+(x%10)*(x%10)
            x=x//10
        x=sumval
    return x


num=int(input())
flag=happy(num)
print("Yes it is a Happy Number.") if(flag==1) else print("No it is not a Happy Number")
