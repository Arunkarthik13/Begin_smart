#include<stdio.h>
#include<string.h>
void main()
{
   char a[30];
   int i,count=0;
   printf("Enter the string:");
   scanf("%s",&a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
       {
           count++;
       }
   }
   if(count>0)
   {
       printf("\nyes vowel");
   }
   else
   {
       printf("\nNot vowel");
   }
}
