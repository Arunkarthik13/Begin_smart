#include<stdio.h>

void main() {
   int f=0,s=1,n,last,i;
   printf("Enter the last:");
   scanf("%d",&last);
   for(i=2;i<=last;i++)
   {
       n=f+s;
       f=s;
       s=n;
   }
   printf("\nThe fibanacci is:%d",n);
}
