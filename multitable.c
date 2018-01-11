#include<stdio.h>

void main() {
int a,i,s;
printf("Enter the number:");
scanf("%d",&a);
for(i=1;i<=5;i++)
{
 
    s=a*i;
    printf("\t %d",s);
}
}
