#include<stdio.h>

void main() 
{
 int n,s,te;
 printf("Enter the two number:");
scanf("%d %d",&n,&s);
n^=s;
s^=n;
n^=s;
printf("The swapping of two numbers are:%d %d",n,s);

}
