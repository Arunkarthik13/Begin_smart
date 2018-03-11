#include<stdio.h>
void main() {
  int j,a,count=0;
   printf("Enter the number:");
   scanf("%d",&a);
   for(j=2;j<a;j++)
   {
       if((a%j)==0)
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
