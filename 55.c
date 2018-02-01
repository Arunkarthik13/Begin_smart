#include<stdio.h>
void main()
{
  int n,a,s;
  printf("Enter the number:");
  scanf("%d%d",&n,&a);
  s=n*a;
  if((s%2)==0)
  {
      printf("Even");
      
  }
  else
  {
  printf("Odd");
  }
}
