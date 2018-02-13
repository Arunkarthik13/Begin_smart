#include<stdio.h>
#include<string.h>
void main()
{
    int i,y=0;
    char a[10];
    printf("Enter the string:");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            y++;
        }
    }
    printf("\ncount is:%d",y+1);
}
    
