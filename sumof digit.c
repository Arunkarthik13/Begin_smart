#include<stdio.h>

void main()
{
    int n,a,s=0;
    printf("Enter the number:");
    scanf("\n%d",&n);
    while(n>0)
    {
        a=n%10;
        s=s+a;
        n=n/10;
    }
     printf("The sum of each digit of a number%d",s);
}
