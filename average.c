#include<stdio.h>

void main() 
{
 int a[10],n,i,sum=0,avg;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("\n");
 printf("Enter the array:");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     sum=sum+a[i];
}
avg=sum/n;
printf("The average is:%d",avg);
}
