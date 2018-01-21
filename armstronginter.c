#include<stdio.h>

void main() {
   int a,b,i,r,n,s;   
 
   printf("Enter the two intervals:");
   scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
   {
   n=i;
   r=0;
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
