#include "stdio.h"

void main()
{
    int i,j,x,n;

    printf("Nilai Batas : ");
    scanf("%i",&n);

    for (i=1;i<=n;i++)
    {
        for (j=2;j<=i;j++)
        {
            printf(" ");
        }
        for (x=n;x>=i;x--)
        {
            printf("*");
        }
        printf("\n");
    }
}





