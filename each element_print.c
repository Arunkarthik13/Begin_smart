#include<stdio.h>

void main()
{
    int n,a,s=0,r=0;
    printf("Enter the number:");
    scanf("\n%d",&n);
    while(n>0)
{
       a=n%10;
        s=s*10+a;
        n=n/10;
    }
    while(s>0)
    {
        r=0;
        r=s%10;
        printf("\t%d",r);
        s=s/10;
}
}
