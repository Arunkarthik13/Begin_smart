#include<stdio.h>
void main()
{
int n,b=2,i,c=0,x=1;
printf("Enter the numbers:");
scanf("%d ",&n);
while(n!=1)
{
    n=n/2;
    c++;
}
for(i=0;i<=c+1;i++)
{
    x=x*b;
}
printf("\nThe nearest power of 2 is:%d",x);
}
