#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of levels of the hollow pyramid:\n");
    scanf("%d",&n);
    printf("HOLLOW PYRAMID STAR\n");
    int i,j,k=1;
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
        printf("*");
        if(i!=1&&i!=n)
        {
            for(j=1;j<=k;j++)
                printf(" ");
            printf("*");
            k=k+2;
        }
        if(i==n)
        {
            for(j=1;j<k+2;j++)
                printf("*");
        }
    }
    return 0;
}
