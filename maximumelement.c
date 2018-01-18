#include<stdio.h>

void main() 
{
    int a[10],n,i,max=0;
    printf("Enter the total element");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the array values:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
max=a[0];
for(i=0;i<n;i++)
{
    if(max<a[i])
    {
    max=a[i];
    }
}
printf("%d",max);
}
