#include<stdio.h>

void main() 
{
 int a[10],n,i;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("\n");
 printf("Enter the array:");
 for(i=0;i<10;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<10;i++)
 {
       if(a[i]==n)
       {
        printf("The lowest number is:%d",a[i-1]);
        printf("\nThe highest number is:%d",a[i+1]);
        }
        }
}
