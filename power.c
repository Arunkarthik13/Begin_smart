#include<stdio.h>

void main() {
   int a,p,b=1,i;
   printf("Enter the number and its power:");
   scanf("%d \t %d",&a,&p);
   for(i=1;i<=p;i++)
   {
       b=b*a;
   } printf("%d",b);
   
}
