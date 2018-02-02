#include<stdio.h>

void main() 
{
    int a[10],n,i;
    printf("Enter the total element");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the array values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    printf("\nThe element with its index:");
for(i=0;i<n;i++)
{
    printf("%d %d",a[i],i);
    printf("\n");
}
}
