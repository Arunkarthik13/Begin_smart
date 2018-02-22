#include<stdio.h>
#include<string.h>
void main()
{
  char a[20];
  int i,j,c,count=0;
  printf("\nEnter the strings:\n");
  scanf("%s ",&a);
  c=strlen(a);
 for(j=0;a[j]!='\0';j++) 
 {
 for(i=j+1;a[i]!='\0';i++)
 {
   if(a[j]!=a[i])
   {
       count++;
   }
 }
  }
  printf("\nTHE VALUE IS");
  if((count)==c)
  {
      printf("\nisogram");
  }
  else
  {
      printf("not a isogram");
  }
}
