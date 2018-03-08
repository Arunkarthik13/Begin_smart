#include<stdio.h>
void main() 
{
    int k,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        sum=sum+i;
    }
   
        printf("\n%d",sum);
    }
