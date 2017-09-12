#include <stdio.h>  
   
int main() {  
    char ch;
    /* 
     * Take a character as input from user 
     */
    printf("Enter a Character\n");  
    scanf("%c", &ch);  
       
    if((ch >= 'a' && ch <= 'z')||((ch>='A'&&(ch <= 'Z')){
        printf("%c is an Alphabet\n", ch);  
    } else {  
        printf("%c is Not an Alphabet\n", ch);  
    }
   
    return 0;  
}
