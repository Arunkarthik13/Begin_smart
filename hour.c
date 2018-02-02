#include<stdio.h>
void main()
{
    int a,m,s;
    printf("Enter the minute:");
    scanf("%d",&m);
       s=m/60;
       a=m%60;
    printf("\nThe time is:%d",s);
    printf("\t%d",a);
}
