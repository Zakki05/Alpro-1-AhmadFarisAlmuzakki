#include "stdio.h"

void main()

{
    int i,j,x;

    x=0;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
            x=i;
            printf("%i\t",i);
        }
        printf("\n");
    }
}
