#include "stdio.h"

void main()
{
    int jarak,harga,harga2,total;

    printf("Jarak Tempuh : ");
    scanf("%i",&jarak);

    if(jarak>1)
    {
        harga=5600;
        harga2=(jarak-1)*2000;
        total=harga+harga2;

        printf("Pembayaran Anda : Rp.%i\n",total);
    }
    else
    {
        total=5600;
        printf("Pembayaran Anda : Rp.%i\n",total);
    }
}

