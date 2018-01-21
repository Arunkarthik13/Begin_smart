#include<stdio.h>
void main()
{
int N,i,s=0;
printf("Enter  limit:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
s=s+i;
}
printf("%d",s);
}
