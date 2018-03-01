#include<stdio.h>
void main()
{
    char a[10];
    int i;
    printf("Enter the string:\n");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
       if(isdigit(a[i])) 
       {
           printf("\tThe numbers in the string are %c",a[i]);
       }
    }
}
