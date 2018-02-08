#include<stdio.h>
void main() 
{
    int n,a,b,i,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("\nEnter the limit:");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        
            if(i==n)
               {
           count++;
               }
    }
    if(count>0)
    {
     printf("\nyes");
    }
               else
               {
                   printf("NO");
               }
           
}
