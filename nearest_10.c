#include<stdio.h>
void main()
{
int n,i;
printf("Enter the number:");
scanf("%d",&n);
for(i=n;;i++)
{
 if(i%10==0)
 {
 printf("%d",i);
 break;
 }
}
}
