#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the number:");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("ais big");
else if(b>c)
printf("b is big");
else
printf("c is big");
}
