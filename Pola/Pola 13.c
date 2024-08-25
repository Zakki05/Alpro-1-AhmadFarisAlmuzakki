#include "stdio.h"

void main()
{
    int i,j,x,n;

    printf("Nilai Batas : ");
    scanf("%i",&n);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if(i%4==1)
            {
                printf("*\t");
            }
            if(i%4==2)
            {
                printf("#\t");
            }
            if(i%4==3)
            {
                printf("1\t");
            }
            if(i%4==0)
            {
                printf("O\t");
            }
        }
        printf("\n");
    }
}
