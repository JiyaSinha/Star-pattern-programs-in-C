#include<stdio.h>
int main()
{
    int n;
    printf("Enter the level of mirrored half diamond star:\n");
    scanf("%d",&n);
    int i,j;
    printf("MIRRORED HALF DIAMOND STAR PATTERN\n");
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
    }
    for(i=1;i<n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
            printf(" ");
        for(j=1;j<=n-i;j++)
            printf("*");
    }
    return 0;
}
