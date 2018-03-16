#include <stdio.h>
void main()
{
    char a[40];
    int i,n;
    scanf("%d",&n);
    printf("\n");
    printf("Enter the string :\n");
    scanf("%s",&a);
    printf("The lexicographical order is:");
    for(i=0;i<n-1;i++)
    { char temp;
        for(int j=i+1;j<n;j++)
        {
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }
     for(i=0;i<n;i++)
     {
         printf("%c",a[i]);
     }
    
   
}
