#include<stdio.h>

int happy(int n){
    
    int x=n;
    
    while(x!=1 && x!=4){
        int sum=0;
        while(x>0){
            sum=sum+(x%10)*(x%10);
            x/=10;
        }
        x=sum;
    }
    return x;
}
int main()
{
    int n;
    scanf("%d",&n);
    int flag=happy(n);
    flag==1 ? printf("Yes it is a Happy Number.") : printf("No it is not a Happy Number");
}
