#include "stdio.h"

void main()
{
    int merekX,merekY,merekZ;
    long int hargaX,hargaY,hargaZ,hargaZ2,diskonX,diskonY,diskonZ,totalX,totalY,totalZ,hargaz_sebelum_diskon,total_keseluruhan;

    printf("Merek X : ");
    scanf("%i",&merekX);
    printf("Merek Y : ");
    scanf("%i",&merekY);
    printf("Merek Z : ");
    scanf("%i",&merekZ);

    if(merekX>=3)
    {
        hargaX=merekX*40000;
        diskonX=hargaX*0.1;
        totalX=hargaX-diskonX;

        printf("\nHarga X Sebelum Diskon : Rp.%li\n",hargaX);
        printf("Diskon X: Rp.%li\n",diskonX);
        printf("Total Pembayaran X: Rp.%i\n",totalX);

    }
    else
    {
        totalX=merekX*40000;

        printf("Total Pembayaran X : Rp.%li\n",totalX);
    }

    if(merekY>3)
    {
        hargaY=merekY*50000;
        diskonY=hargaY*0.12;
        totalY=hargaY-diskonY;

        printf("Harga Y Sebelum Diskon : Rp.%li\n",hargaY);
        printf("Diskon Y : Rp.%li\n",diskonY);
        printf("Total Pembayaran Y : Rp.%li\n",totalY);
    }
    else
    {
        totalY=merekY*50000;

        printf("Total Pembayaran Y : Rp.%li\n",totalY);
    }

    if(merekZ>1)
    {
        hargaZ=60000;
        hargaZ2=(merekZ-1)*60000;
        hargaz_sebelum_diskon=hargaZ+hargaZ2;
        diskonZ=hargaZ2*0.15;
        totalZ=(hargaZ+hargaZ2)-diskonZ;

        printf("Harga Z Sebelum Diskon : Rp.%li\n",hargaY_sebelum_diskon);
        printf("Diskon Z: Rp.%li\n",diskonZ);
        printf("Total Pembayaran Z: Rp.%li\n",totalZ);

    }
    else
    {
        totalZ=merekZ*60000;

        printf("Total Pembayaran Z: Rp.%li\n",totalZ);
    }

    total_keseluruhan=totalX+totalY+totalZ;
    printf("Total Pembayaran Keseluruhan : Rp.%li\n",total_keseluruhan);

}
