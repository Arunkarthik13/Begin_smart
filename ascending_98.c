#include<stdio.h>
void main() {
   int n,a[30],i;
   printf("Enter the number of values:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<=n;i++)
   {
       if(a[i+1]<=a[i])
       {
           printf("%d",i+1);
           break;
       }
   }
   }
