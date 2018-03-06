#include<stdio.h>
void main() {
  char a[20];
  int count=0,i;
  printf("Enter the string:");
  scanf("%[^\n]s",&a);
  for(i=0;a[i]!='\0';i++)
  {
      if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
      {
          count++;
      }
      else if(a[i]==' ')
      {}
      else
      {
          break;
      }
  }
  printf("\nThe number of character: %d",count);
}
