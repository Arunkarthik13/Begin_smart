#include<stdio.h>

void main() {
   int r=0,n,s;
   printf("Enter the number:");
   scanf("%d",&n);
   while(n>0)
   {
       s=n%10;
       r++;
       n=n/10;
   }
   printf("%d",r);
}
