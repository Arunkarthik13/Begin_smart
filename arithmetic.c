#include <stdio.h>

 
int main() {
    int n,a,d, value, sum=0, i;
 
    printf("Enter the number of terms\n");
    scanf("%d", &n);
 
    printf("Enter first term and common difference \n");
    scanf("%d %d", &a,&d);
    value =a;
        for(i = 0; i < n; i++) {
        printf("%d ",value);
        sum += value;
        value = value + d;
    }
 
    printf("\nSum  %d terms is %d\n",n, sum);
 
   
 return 0;
}
