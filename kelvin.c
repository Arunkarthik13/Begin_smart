#include<stdio.h>
void main()
{
int temp;
float kel;
printf("Enter the temperature in celcius:\n");
scanf("%d ",&temp);
kel=temp+273.15;
   printf("The temperature in kelvin is:%.2f",kel);
}
