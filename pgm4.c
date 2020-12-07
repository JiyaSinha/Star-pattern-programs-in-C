#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of levels in the hollow inverted pyramid:\n");
    scanf("%d",&n);
    int i,j,k;
    k=(2*n)-5;
    printf("HOLLOW INVERTED STAR PYRAMID\n");
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i-1;j++)
            printf(" ");
        printf("*");
        if(i!=1&&i!=n)
        {
            for(j=1;j<=k;j++)
                printf(" ");
            printf("*");
            k=k-2;
        }
        if(i==1)
        {
            for(j=1;j<=k+3;j++)
                printf("*");
        }
    }
    return 0;
}
