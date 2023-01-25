
#include <stdio.h>

int perfect_sqr(int n){

    int flag=1;
    for(int i=1;i<=n/2;i++){
        if(i*i==n){
            flag=0;
            break;
        }
    }

    return flag;
}
int main()
{
    int num;
    scanf("%d",&num);
    int x=perfect_sqr(num);
    x==0 ? printf("Yes, it's a Perfect Square.") : printf("No, it's not a Perfect Square");
}
