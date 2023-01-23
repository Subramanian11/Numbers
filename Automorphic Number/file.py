def automorphic(n):
    sq=n*n
    while(n>0):
        if(n%10!=sq%10):
            return False
            break
        n=n//10
        sq=sq//10
    return True

num=int(input())
x=automorphic(num)
print("Yes it's an Automorphic Number.") if(x==True) else print("No it's not an Automorphic Number.")
