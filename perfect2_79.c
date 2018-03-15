#include<stdio.h>
void main() {
  int n,a,pro,i,x=1;
   printf("Enter the number:\n");
  scanf("%d %d",&a,&n);
  pro=a*n;
  for(i=1;;i++)
  {
      x=i*i;
      if(x==pro)
      {
          printf("yes perfect square");
          break;
      }
      x=1;
  }
}
 
