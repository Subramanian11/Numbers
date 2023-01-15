/*
An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.

For example:

9 is an Armstrong number, because 9 = 9^1 = 9
10 is not an Armstrong number, because 10 != 1^2 + 0^2 = 1
153 is an Armstrong number, because: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
154 is not an Armstrong number, because: 154 != 1^3 + 5^3 + 4^3 = 1 + 125 + 64 = 190
*/

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
