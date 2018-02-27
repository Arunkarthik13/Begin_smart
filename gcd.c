#include<stdio.h>
void main()
{
    int m,n,r;
    printf("Enter the two numbers:");
    scanf("%d %d",&m,&n);
    while(n!=0)
    {
        r=m%n;
        m=n;
        n=r;
    }
    printf("\nThe Gcd of two number is:%d",m);
   }
