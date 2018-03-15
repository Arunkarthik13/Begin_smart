#include<stdio.h>
void main() {
  int a,n,pro=1;
   printf("Enter the number:\n");
  scanf("%d ",&a);
  while(a>0)
  {
      n=a%10;
      pro=pro*n;
      a=a/10;
  }
  printf("product of digits:%d",pro);
}
