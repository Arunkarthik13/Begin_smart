#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    int i,d,j;
    char str[50],temp,str1[60];
    scanf("%s",&str);
    d=strlen(str);
    for(i=0;i<d;i++)
    {
    str1[i]=tolower(str[i]);
    }
    for (i = 0; i < d-1; i++) {
      for (j = i+1; j < d; j++) {
         if (str1[i] > str1[j]) {
            temp = str1[i];
            str1[i] = str1[j];
            str1[j] = temp;
         }
      }
   }
   for (i = 0; i < d; i++)
   {
   printf("%s",str1[i]);
   }
    for (i = 0; i < d; i++) 
    {
        if(str1[i]==str1[i+1])
        {
            printf("False");
        }
        else
        {
            printf("True");
        }
    }
    return 0;
    
}
