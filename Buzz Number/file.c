#include <stdio.h>

int Buzz(int n){
    
    if(n%10==7 || n%7==0){
        return 1;
    }    
    else{
        return 0;
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    int x=Buzz(num);
    x==1 ? printf("Yes, it's a Buzz Number") : printf("No, it's not a Buzz Number");
    return 0;
}
