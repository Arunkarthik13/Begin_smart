#include<stdio.h>
#include<string.h>
void main()
{
  char a[20];
  int i,j,c;
  printf("\nEnter the strings:\n");
  scanf("%s ",&a);
 for(i=0;a[i]!='\0';i++)
 {
     if((i%2)==0)
    {
        printf("\t%c",a[i]);
    }
 }printf("\n");
     for(i=1;a[i]!='\0';i++)
    {
        if((i%2)!=0)
        {
           printf("\t%c",a[i]);  
        }
        }
   
}
