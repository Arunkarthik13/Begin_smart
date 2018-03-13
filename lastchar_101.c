#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main() {
   char a[50];
   int i,n,b,s,r;
   printf("Enter the string:\n");
   scanf("%[^\n]s",&a);
   printf("Enter the n value:\n");
   scanf("%d",&n);
   b=strlen(a);
   s=(b-1)-n;
   for(i=0;i<b;i++)
 {   
     if(i==s)
     {
         r=i;
}}
for(i=r+1;i<b;i++)
{
    printf("%c",a[i]);
}}
