#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The divisible of anumber by 2 is:");
    i=n;
    while((i%2)==0)
    {
        if((i%2)==0){
            i=i/2;
        printf("\n%d",i);}
        i=i%2;
    }
    if((n%2)!=0)
    {
        printf("\n%d",n);
    }
}
