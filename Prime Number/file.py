def prime(n):
    count,i=0,1 
    while(i<=n):
        if(n%i==0):
            count=count+1 
        i=i+1
    return 1 if(count==2) else 0

num=int(input())
if(prime(num)==True):
    print("Yes it's a Prime Number")

else:
    print("No it's not a Prime Number")
    
