def ugly(n):
    if(n%2==0):
        return ugly(int(n/2))
    elif(n%3==0):
        return ugly(int(n/3))
    elif(n%5==0):
        return ugly(int(n/5))
    elif(n==1):
        return 1
    else:
        return 0
    

num=int(input())
print("No it's not an Ugly Number") if(ugly(num)==0) else print("Yes it's an Ugly Number")
    
