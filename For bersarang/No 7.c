#include "stdio.h"

void main()

{
    int i,j,x;

    x=0;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=5;j++)
        {
            x=x+1;
            printf("%i\t",x);
        }
        printf("\n");
    }
}
