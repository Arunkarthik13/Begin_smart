#include<stdio.h>
#include<string.h>
void main()
{
  char a[20],b[20];
  int j,c;
  printf("\nEnter the two strings:");
  scanf("%s %s",&a,&b);
 c=strlen(a);
  	 for(j=0;b[j]!='\0';j++)
 {
     a[c]=b[j];
     c++;
 }
  a[c]='\0';
  printf("\nThe string is after cancatenation is:%s",a);
}
