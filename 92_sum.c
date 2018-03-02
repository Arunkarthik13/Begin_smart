#include<stdio.h>
void main()
{
int a[10],l1,i,s=0;
printf("Enter the total number:\n");
scanf("%d ",&l1);
printf("Enter the array:\n");
for(i=0;i<l1;i++)
{
    scanf("%d",&a[i]);
    s=s+a[i];
}
    printf("The sum is is:%d",s);
}
