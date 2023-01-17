

#include<stdio.h>
int main()
{
    int n,count;
    scanf("%d%n",&n,&count);
    int x=n;
    int rem;
    int adder=0;
    while(n>0){
        rem=n%10;
        int counter=0;
        int source=1;
        while(counter<count){
            source*=rem;
            counter++;
        }
        adder+=source;
        n/=10;
    }
    if(adder==x){
        printf("It's an Armstrong Number");
    }
    else{
        printf("It's not an Armstrong Number");
    }
}
