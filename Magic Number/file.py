def magic(n):
    x,sumval,rev=n,0,0
    
    #getting sum of digits
    while(x>0):
        sumval=sumval+x%10
        x=int(x/10)
        
    #getting reverse value for the sum of digits
    sumval1=sumval
    while(sumval1>0):
        rev=rev*10+sumval1%10
        sumval1=int(sumval1/10)
    
    return sumval*rev

num=int(input())
x=(magic(num)==num)
if(x==1):
    print("Yes it's a Magic Number")
else:
    print("No it's not a Magic Number")
