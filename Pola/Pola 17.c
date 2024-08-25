#include "stdio.h"

void main()
{
    int i,j,n,k,l,m;

    printf("Nilai Batas : ");
    scanf("%i",&n);

    for (i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf(" *");
        }
        for(m=2;m<=i;m++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
