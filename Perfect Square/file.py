def perfect_square(n):
    flag=0
    for i in range(1,(n//2)+1):
        if(i*i==n):
            flag=1
            
    return flag
    
num=int(input())
x=perfect_square(num)
print("Yes, it's a Perfect Square.") if(x==1) else print("No, it's not a Perfect Square")
