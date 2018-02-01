#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if((n%2)==0)
    {
        printf("The even num:%d",n);
      
    }
    --n;

     if((n%2)==0)
    {
        printf("The even num is:%d ",n);
        
    }
    else
    {
        printf("not");
    }
  
}
