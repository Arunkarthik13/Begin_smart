#include<stdio.h>
void main()
{
int a[10],N,K,i,s=0;
printf("Enter  limit:");
scanf("%d",&N);
scanf("%d",&K);
printf("\n");
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<K;i++)
{
s=s+a[i];
}
printf("%d",s);
}
