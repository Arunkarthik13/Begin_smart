#include<stdio.h>

void main()
{
    int n,a,r,s=0;
    printf("Enter the number:");
    scanf("\n%d",&n);
    while(n>0)
    {
        a=n%10;
        s=s*10+a;
        s=s%10;
        printf("\t%d",s);
        n=n/10;
    }
}
