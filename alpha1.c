#include <stdio.h>  
   
int main()
{  
    char ch;
    printf("Enter a Character:\n");  
    scanf("%c", &ch);  
       
    if((ch >= 'a' && ch <= 'z')||(ch>='A'&&ch <= 'Z'))
    {
        printf("Alphabet\n");  
    } 
    else
    {  
        printf(" Not Alphabet\n");  
    }
   
    return 0;  
}
