#include<stdio.h>
void main() {
  int i,a,count=0;
   printf("Enter the number:");
   scanf("%d",&a);
   for(i=2;i<a;i++)
   {
       if((a%i)==0)
       count++;
   }
   if(count>0)
   {
   printf("yes");
   }
   else
   {
       printf("\nno");
   }
}
