#include <stdio.h>

int magic(int n){
    int x=n,sum=0,rev=0;
    
    //getting sum of digits
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    
    //getting reversed value for the sum of digits
    int sum1=sum;
    while(sum1>0){
        rev=rev*10+sum1%10;
        sum1/=10;
    }
    return rev*sum;
}
int main()
{
    int num;
    scanf("%d",&num);
    int x=(magic(num)==num);
    if(x==1){
        printf("Yes it's a Magic Number");
    }
    else{
        printf("No it's not a Magic Number");
    }

    return 0;
}
