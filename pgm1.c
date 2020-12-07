#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of levels of a pyramid:\n");
    scanf("%d",&n);
    int i,j,k=1;
    printf("STAR PYRAMID PROGRAM\n");
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=k;j++)
           {
             printf("*");
           }
        k=k+2;
    }
    return 0;
}

