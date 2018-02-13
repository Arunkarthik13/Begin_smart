#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    i=a+b;
    if((i%2)==0)
        {
            printf("\nThe result is even:%d",i);
        }
        else
        {
            printf("\nOdd:%d",i);
        }
    }
    
