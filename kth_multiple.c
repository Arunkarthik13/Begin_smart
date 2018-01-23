#include<stdio.h>

void main()
{
int n,k,a[10],i,count=0;
printf("N&k value:");
scanf("%d %d",&n,&k);
printf("\n");
printf("Enter the array:");
for(i=1;i<=n;i++)
{
    scanf("\t%d",&a[i]);
}
for(i=1;i<=n;i++)
{
    if(a[i]==k)
    {
        count++;
    }
}

   printf("\n count is:%d",count);
}
