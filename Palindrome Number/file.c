#include <stdio.h>
int reverse(int a){

    int rev=0;
    while(a!=0){
        rev=rev*10+a%10;
        a/=10;
    }
    return rev;
}

int main()
{
    int n;
    scanf("%d",&n);
    int rev=reverse(n);
    if(rev==n){
        printf("Yes it's a palindrome number");
    }
    else{
        printf("No it's not a palindrome number");
    }
}
