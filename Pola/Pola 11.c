#include "stdio.h"

void main()
{
    int i,j,n;

    printf("Nilai Batas : ");
    scanf("%i",&n);

    for (i=1;i<=n;i++)
    {
        for (j=n;j>=i;j--)
        {
            printf("%i\t",j);
        }
        printf("\n");
    }
}





