#include<stdio.h>
int main()
{
    int n;
    printf("Enter the level of the half diamond star:\n");
    scanf("%d",&n);
    printf("HALF DIAMOND STAR\n");
    int i,j;
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
            printf("*");
    }
    for(i=1;i<n;i++)
    {
        printf("\n");
        for(j=1;j<=n-i;j++)
            printf("*");
    }
    return 0;
}
