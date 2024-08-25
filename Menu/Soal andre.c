/**
0 0 0 0 0 #
0 0 0 0 # #
0 0 0 # # #
0 0 # # # #
0 # # # # #
*/
#include "stdio.h"

void main()
{
    int n,i,j,t;

    printf("Masukkan Batas : ");
    scanf("%i",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" 0");
        }
        for(t=1;t<=i;t++)
        {
            printf(" #");
        }
        printf("\n");
    }
}
