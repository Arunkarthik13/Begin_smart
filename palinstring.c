#include<stdio.h>
#include<string.h>
void main()
{
   char a[30];
   int i,n,count=0;
   printf("Enter the string:");
   scanf("%s",&a);
   n=strlen(a);
   for(i=0;i<n;i++)
   {
       if(a[i]==a[n-i-1])
       {
           count++;
       }
   }
   if(count==n)
   {
       printf("\npalindrome");
   }
   else
   {
       printf("\nNot palindrome");
   }
}
