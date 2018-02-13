#include<stdio.h>
#include<string.h>
void main()
{
  char a[10];
  int i,k,r=0;
  printf("Enter the string:");
  scanf("%s",&a);
  k=strlen(a);
  for(i=0;i<k;i++)
  {
      if(a[i]=='0'||a[i]=='1')
      {
         r=r+1;
      }
      else{
          break;
      }
  }
  if(r==k)
  {
      printf("\nYes");
  }
      else
      {
          printf("\nNO");
          
      }
  
  
}
