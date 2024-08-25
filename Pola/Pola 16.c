#include "stdio.h"

void main()
{
    int i,j,n,k,l,m;

    printf("Nilai Batas : ");
    scanf("%i",&n);

    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf(" *");
        }
        for(k=n-1;k>=i;k--)
        {
            printf("  ");
        }
        for(l=n-1;l>=i;l--)
        {
            printf("  ");
        }
        for(m=1;m<=i;m++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
