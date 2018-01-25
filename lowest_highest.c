#include<stdio.h>

void main() 
{
 int a[10],n,i,j;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("\n");
 printf("Enter the array:");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i++)
{
    int temp;
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])  
      {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
      }
    }
}
        printf("The lowest number is:%d",a[0]);
        printf("\nThe highest number is:%d",a[n-1]);
    
}
