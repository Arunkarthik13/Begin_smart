#include <stdio.h>
void main()
{
    int l,h,a,b,c,d;
    printf("Enter the number :\n");
    scanf("%d %d\n %d %d \n%d %d ",&l,&h,&a,&b,&c,&d);
   l=l / h;
   a=a % b;
   c=c % d;
   printf("%d\t %d \t%d",l,a,c);
   
}
