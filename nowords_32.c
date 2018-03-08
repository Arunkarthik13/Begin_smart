#include<stdio.h>
void main() {
   char a[50];
   int count=0,i;
   printf("Enter the string:");
   scanf("%[^\n]s",&a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]==' ')
       {
           count++;}
       }
       printf("\nThe number of words in agiven line is:%d",count+1);
}
