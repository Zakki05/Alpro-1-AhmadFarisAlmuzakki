#include "stdio.h"

void main()

{
    int i,j,x;

    x=1;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%i\t",x);
            x=i+1;
        }
        printf("\n");
    }
}
