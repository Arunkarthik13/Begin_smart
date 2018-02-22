#include<stdio.h>
#include<string.h>
void main()
{
  char a[10],b[10];
  int n,i,count=0;
  printf("\nEnter the two strings:");
  scanf("%s %s",&a,&b);
  n=strlen(a);
  i=0;
  while((a[i]&b[i])!='\0')
  {
      if(a[i]==b[i])
      {
          count++;
      }
      i++;
  }
  if(count==n)
  {
      printf("\nstrings equal:%s",a);
  }
  else if(a>b)
  {
      printf("\ngreater:%s",a);
  }
  else
  {
      printf("greater is:%s",b);
  }
}
