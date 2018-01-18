#include<stdio.h>
void main()
{
int a;
printf("Enter the number:");
scanf("%d",&a);
if(a>0)
printf("The given number is positive");
else if(a<0)
printf("The given number is negative");
else
{
printf("The number is equal to zero");
}
}
