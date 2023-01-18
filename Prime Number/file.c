
#include <stdio.h>

int prime(int n){
    int i=1;
    int count=0;
    while(i<=n){
        if(n%i==0){
            count++;
        }
        i++;
    }
    return 1 ? (count == 2) :0;
    
}
int main()
{
    int num;
    scanf("%d",&num);
    if(prime(num)==1){
        printf("Yes it's a Prime Number");
    }
    else{
        printf("No it's not a Prime Number");
    }

    return 0;
}
