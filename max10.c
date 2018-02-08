#include<stdio.h>

void main() 
{
    int b[10],n,i,max=0;
    printf("Enter the total element");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the array values:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
max=b[0];
for(i=0;i<n;i++)
{
    if(max<b[i])
    {
    max=b[i];
    }
}
printf("%d",max);
}
