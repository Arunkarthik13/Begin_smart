#include<stdio.h>
int factorial(int n);
void main()

{
int n,f;
printf("Enter the number:");
scanf("%d",&n);
f=factorial(n);
printf("The factorial of anumberis %d",f);
}
int factorial(int n)
{
if(n==0)
return 1;
else
return n*factorial(n-1);
}
