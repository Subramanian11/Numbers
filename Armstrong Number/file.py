from math import *
def armstrong(n):
    n1,sumval,power=n,0,0
    x=floor(log10(n))+1
    while(n1>0):
        power=power+pow(n1%10,x)
        sumval=sumval+power
        n1=floor(n1/10)
        
    return 1 if(power==n) else 0
    

n=int(input())
z=armstrong(n)
if(z==True):
    print("It's an Armstrong Number")
else:
    print("It's not an Armstrong Number")
