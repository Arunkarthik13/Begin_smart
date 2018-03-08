#include<stdio.h>
void main() {
   char b[100];
   int count=0,i;
   printf("Enter the string:");
   scanf("%[^\n]s",&b);
   for(i=0;b[i]!='\0';i++)
   {
       if(b[i]>='0'&&b[i]<='9')
       {
           count++;}
       }
       printf("\nThe number of words in agiven line is:%d",count);
}
