#include<stdio.h>
#include<stdlib.h>

int deficient(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    return (sum<num)?1:0;
}
int main()
{
    int num;
    scanf("%d",&num);
    int x=deficient(num);
    x==1 ? printf("Yes it's a Deficient Number.") : printf("No it's not a Deficient Number");
}
