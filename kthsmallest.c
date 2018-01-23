#include<stdio.h>

void main()
{
int n,k,a[10],i;
printf("N&k value:");
scanf("%d %d",&n,&k);
printf("\n");
printf("Enter the array:");
for(i=1;i<=n;i++)
{
    scanf("\t%d",&a[i]);
}
for(i=1;i<n;i++)
{
    int temp;
    for(int j=i+1;j<=n;j++)
    {
    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}
    printf("%d",a[k]);

  
}
