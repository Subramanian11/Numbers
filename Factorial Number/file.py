def fact(n):
    x=2
    fact=1
    for i in range(x,n+1):
        fact=fact*i
    return fact

z=int(input())
print(fact(z))
