
#include <stdio.h>
int fact(int x){
    int n=2;
    int fact=1;
    while(n<=x){
        fact=fact*n;
        n++;
    }
    return fact;
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",fact(num));

    return 0;
}
