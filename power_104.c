#include<stdio.h>
void main()
{
    int n,k,i,c=1;
    printf("Enter the two numbers:");
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++)
    {
        c=c*n;
    }
    printf("\n%d",c);
}
