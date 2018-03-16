#include <stdio.h>
void main()
{
    int a[20],b[20],i,n;
    char ch[20];
    printf("Enter the number :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            scanf("%d %c %d\n  ",&a[i],&ch[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ch[i]=='/'){
   printf("%d\t",(a[i]/b[i]));
        }
        else
        {
            printf("%d\t",(a[i]%b[i]));
            }
    }
   
}
