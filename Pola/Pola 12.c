#include "stdio.h"

void main()
{
    int i,j,x,n;

    printf("Nilai Batas : ");
    scanf("%i",&n);

    for (i=1;i<=n;i++)
    {
        for (j=4;j>=i;j--)
        {
            printf(" \t");
        }
        for (x=1;x<=i;x++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}





