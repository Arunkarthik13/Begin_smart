#include<stdio.h>
void main() 
{
    int a[10],i,j;
    printf("Enter the array values:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<9;i++)
{
    int temp;
    for(j=i+1;j<10;j++)
    {
      if(a[i]>a[j])  
      {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
      }    }    }
    printf("The sorted array is:");
for(i=0;i<10;i++)
{
    printf("%d",a[i]);
    printf("\t");
}
printf("\nThe maximum among 10 numbers are:%d",a[0]);
}

