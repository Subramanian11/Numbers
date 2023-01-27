def Duck(n):
    if(n[0]=='0'):
        return 0
    else:
        return 1

n=input()
x=Duck(n)
print("Yes it's a Duck Number") if(x==1) else print("No, it's not a Duck Number")
