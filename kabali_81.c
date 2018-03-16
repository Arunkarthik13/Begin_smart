#include <stdio.h>
void main()
{
    int a[40],b[40],i,n;
    printf("Enter the number of ninjas of kabali and its opponent:\n");
    scanf("%d",&n);
    printf("Enter the ninjas:\n");
    for(i=0;i<n;i++)
    {
        scanf("\n%d %d",&a[i],&b[i]);
    }
    printf("The difference of kabalininjas and its opponent:");
     for(i=0;i<n;i++)
     {
         printf("%d\n",b[i]-a[i]);
     }
}
