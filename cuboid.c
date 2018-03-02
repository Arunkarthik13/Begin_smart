#include<stdio.h>
void main()
{
int l1,b1,h1;
printf("Enter the nlength breadth,height:");
scanf("%d %d %d ",&l1,&b1,&h1);
void cub();
cub(l1,b1,h1);
}
void cub(int l1,int b1,int h1)
{
    int v,s;
    v=l1*b1*h1;
    s=2(l1*b1+b1*h1+h1*l1);
    printf("\nThe volume is:%d",v);
    printf("\nThe surface area is:%d",s);
}
