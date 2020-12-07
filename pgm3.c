#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of levels of the inverted pyramid:\n");
    scanf("%d",&n);
    int i,j,k;
    k=(2*n)-1;
    printf("INVERTED STAR PYRAMID\n");
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i-1;j++)
            printf(" ");
        for(j=1;j<=k;j++)
            printf("*");
        k=k-2;
    }
    return 0;
}
