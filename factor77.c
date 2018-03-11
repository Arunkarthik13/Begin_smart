#include<stdio.h>
void main() {
  int j,a,count=0;
   printf("Enter the number:");
   scanf("%d",&a);
   for(j=1;j<=a;j++)
   {
       if((a%j)==0)
       printf("\t %d",j);
   }
}
