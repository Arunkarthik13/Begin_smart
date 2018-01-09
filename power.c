#include<stdio.h>

void main() {
   int a,p,c=1,i;
   printf("Enter the number and its power:");
   scanf("%d \t %d",&a,&p);
   for(i=1;i<=p;i++)
   {
       c=c*a;
   } printf("%d",c);
   
}
