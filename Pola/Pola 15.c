#include "stdio.h"

void main()
{

int i,j,n;

    printf("Nilai Batas : ");
    scanf("%i",&n);

    for (i=1;i<=n;i++)
        {
            for (j=i;j>=1;j--)
            {
                printf("*");
            }
        printf("\n");
        }
    for (i=1;i<=n;i++)
    {
        for (j=n-1;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
