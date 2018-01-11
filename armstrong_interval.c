#include<stdio.h>

void main() {
   int a,b,i,r=0,n,s;
   printf("Enter the Two intervals:");
   scanf("%d %d",&a,&b);
   for(i=a;i<=b;i++)
   {
   n=i;
   while(n>0)
   {
       s=n%10;
       r=r+s*s*s;
       n=n/10;
   }
   if(i==r)
   {
printf(" the armstrong numbers are %d",i);   
   }
   }
}
