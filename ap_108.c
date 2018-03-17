#include<stdio.h>
void main()
{
    int a,n,d,ap,i,sum=0;
    printf("Enter the number:\n");
    scanf("%d %d %d",&a,&d,&n);
    for(i=1;i<=n;i++)
    {
   ap=a+((i-1)*d);
   sum=sum+ap;
    }
        printf("The AP value is:%d",sum);
}
