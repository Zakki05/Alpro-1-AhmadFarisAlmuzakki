#include "stdio.h"

void main()
{
    int i,j,n,x;

    printf("Nilai Batas : ");
    scanf("%i",&n);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            x=i*j;
            printf("%i\t",x);
        }
        printf("\n");
    }
}


