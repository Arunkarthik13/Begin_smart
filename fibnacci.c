#include<stdio.h>
void main() 
{
    int f=0,s=1,la,i,n;
    printf("Enter the total numbers:");
    scanf("%d",&la);
    printf("%d",s);
    for(i=2;i<=la;i++)
    {
        n=f+s;
        f=s;
        s=n;
        printf("\t%d",n);
    }
}
