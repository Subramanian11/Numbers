#include <stdio.h>
int ugly(int n){
    int flag=1;
    while(n>1){
        if(n%2==0){
            n/=2;
        }
        else if(n%3==0){
            n/=3;
        }
        else if(n%5==0){
            n/=5;
        }
        else{
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
    int x=ugly(num);
    x==1 ? printf("Yes it's an Ugly Number"):printf("No it's not an Ugly Number");
    
}
