#include<stdio.h>

int Duck(int n,int c)
{
    int arr[c];
    for(int i=c-1;i>=0;i--){
        arr[i]=n%10;
        n/=10;
    }
    return (arr[0]==0)?0:1;
}
int main(void)
{
    int num,count;
    scanf("%d%n",&num,&count);

    int x=Duck(num,count);
    x==1 ? printf("Yes it's a Duck Number") : printf("No, it's not a Duck Number");
    
}
