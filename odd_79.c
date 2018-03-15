#include<stdio.h>
void main() {
  int n,a;
   printf("Enter the number:\n");
  scanf("%d",&a);
  while(a>0)
  {
     n=a%10; 
     if((n%2)!=0)
     {  
         printf("%d\t",n);  
     }
     a=a/10;
  }
}
 
