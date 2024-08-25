#include "stdio.h"

void main()
{
    int i,j,k,l,n;

    printf("Masukkan Batas : ");
    scanf("%i",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" 0");
        }
        for(k=1;k<=i;k++)
        {
            printf(" #");
        }
        printf("\n");
    }
}


