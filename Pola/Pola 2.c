#include "stdio.h"

void main()
{
    int i,j,n;

    printf("Nilai Batas : ");
    scanf("%i",&n);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            printf("%i\t",j);
        }
        printf("\n");
    }
}

