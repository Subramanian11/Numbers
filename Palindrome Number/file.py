def reverse(a):
    x=list(reversed(a))
    return "".join(x)

n=input()
if(n==reverse(n)):
    print("Yes it's a palindrome numeber.")

else:
    print("No it's not a palindrome numeber")
