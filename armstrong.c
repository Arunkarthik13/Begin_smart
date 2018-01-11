 #include<stdio.h>

void main() {
   int a,r=0,n,s;
   printf("Enter the number:");
   scanf("%d",&a);
   n=a;
   while(n>0)
   {
       s=n%10;
       r=r+s*s*s;
       n=n/10;
   }
   if(a==r)
   {
printf("Yes");
}
else
{
    printf("No");
}
}
