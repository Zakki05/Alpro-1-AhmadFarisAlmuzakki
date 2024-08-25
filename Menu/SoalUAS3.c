#include "stdio.h"

void main()
{
    int i,j,k,l,n;

    printf("Masukkan Batas : ");
    scanf("%i",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" 0");
        }
        for(k=1;k<=1;k++)
        {
            printf(" #");
        }
        for(l=1;l<=i-1;l++)
        {
            printf(" 0");
        }
        printf("\n");
    }
}

