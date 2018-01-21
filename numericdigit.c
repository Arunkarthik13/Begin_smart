#include<stdio.h>

void main() {
   int a1,r=0,n,s;
   printf("Enter the number:");
   scanf("%d",&a1);
   n=a1;
   while(n>0)
   {
       s=n%10;
       r++;
       n=n/10;
   }
   printf("%d",r);
}
