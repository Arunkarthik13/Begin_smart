#include<stdio.h>
void main()
{
int a[10],temp,i,k;
printf("Enter the number of elements:\n");
scanf("%d ",&temp);
printf("Enter the kth element:\n");
scanf("%d",&k);
printf("Enter the array:\n");
for(i=0;i<temp;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<temp;i++)
{
    if(i==k-1)
    {
    printf("the value is:%d",a[i]);
    }}
}
