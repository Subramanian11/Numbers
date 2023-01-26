def Buzz(n):
    return 1 if(n%7==0 or n%10==7) else 0 

num=int(input())
x=Buzz(num)
print("Yes, it's a Buzz Number") if x==1 else print("No, it's not a Buzz Number")
