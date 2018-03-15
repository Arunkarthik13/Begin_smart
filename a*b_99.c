#include<stdio.h>
void main() {
  int a,b,n,pro;
   printf("Enter the number:\n");
  scanf("%d %d %d",&a,&n,&b);
  pro=(a*b)%n;
 printf("The value of a*b mod c is:%d",pro);
}
 
