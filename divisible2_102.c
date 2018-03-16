#include <stdio.h>
void main()
{
    int i,n;
        printf("Enter the number:\n");
    scanf("%d",&n);
     while((n%2)==0)
    {
      if((n%2)==0)
      {  
          n=n/2;
          printf("%d \t",n);
    }
    else
    {
        printf("\n%d",n);
    }
    }
    
}
