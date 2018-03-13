#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main() {
   char a[50];
   int i;
   printf("Enter the string:");
   scanf("%[^\n]s",&a);
   a[0]=toupper(a[0]);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]==' ')
       {
           a[i+1]=toupper(a[i+1]);
       }
   }
     printf("%s",a);
}
