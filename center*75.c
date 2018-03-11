#include<stdio.h>
#include<string.h>
void main()
{
   char a[0];
   int i,count=0,n,m;
   printf("Enter the string:");
   scanf("%s",&a);
   n=strlen(a);
   m=(n+1)/2;
   for(i=0;a[i]!='\0';i++)
   { 
       if((n%2)!=0)
       {
       if(i==m-1)
       {
        printf("*");
       }
       else
       {
           printf("%c",a[i]);
       }}
       else if(i==m-1||i==m)
       {
           printf("*");
       }
       else
       {
           printf("%c",a[i]);
       }
}
 }
