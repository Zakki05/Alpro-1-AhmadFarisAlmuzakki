#include "stdio.h"

void main()

{
    int i,j,n;

    printf("Masukkan Batas : ");
    scanf("%i",&n);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (i%2!=0)
            {
                printf("#");
            }
            else
            {
                printf("O");
            }
        }
        printf("\n");
    }
}
