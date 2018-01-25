#include<stdio.h>

void main() 
{
 int n,s,te;
 printf("Enter the two number:");
scanf("%d %d",&n,&s);
te=n;
n=s;
s=te;
printf("The swapping of two numbers are:%d %d",n,s);

}
