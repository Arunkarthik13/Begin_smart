#include<stdio.h>

void main() {
  int i,a,n,s,r=0,count=0;
   printf("Enter the number:");
   scanf("%d",&a);
   for(i=2;i<a;i++)
   {
       if((a%i)==0)
       count++;
   }
   if(count==0)
   {
   printf("prime");
   printf("\n");
   }
   else
   {
       printf("not prime");
   }
   n=a;
   while(n>0)
   {
       s=n%10;
       r=r*10+s;
       n=n/10;
   }
   if(a==r)
   {
printf("palindrome");
}
else
{
    printf("not palindrome");
}
}
