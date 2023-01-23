#include<stdio.h>

int automorphic(int n){
    
    int sq=n*n;
    int flag=1;
    while(n>0){
        
        if(sq%10!=n%10){
            flag=0;
        }
        n/=10;
        sq/=10;
    }
    return flag;
}

int main()
{
    int num;
    scanf("%d",&num);
    int flag=automorphic(num);
    flag==1?printf("Yes it's an Automorphic Number.") : printf("No, it's not an Automorphic Number.");
}
