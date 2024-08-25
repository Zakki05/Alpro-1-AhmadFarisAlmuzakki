#include "stdio.h"

void main()
{
    int merekX,merekY,merekZ;
    long int total_keseluruhan,hargaX,hargaY,hargaZ,hargaZ_1,diskonX,diskonY,diskonZ,totalX,totalY,totalZ;

    printf("\t=Pembayaran Susu Bayi=\n");
    printf("-Merek X Rp.40.000\n-Mrek Y Rp.50.000\n-Merek Z Rp.60.000\n\n");
    printf("Merek X : ");
    scanf("%i",&merekX);
    printf("Merek Y : ");
    scanf("%i",&merekY);
    printf("Merek Z : ");
    scanf("%i",&merekZ);

    if(merekX>=3)
    {
        printf("\n\t=Pemabayaran Susu Bayi Merek X=\n");
        printf("-Selamat Anda Mendapatkan Diskon 10 persen-\n");

        hargaX=merekX*40000;
        diskonX=hargaX*0.1;
        totalX=hargaX-diskonX;

        printf("Diskon Rp.%li\n",diskonX);
        printf("Total Pembayaran Merek X : Rp%li\n",totalX);
    }
    else
    {
         printf("\n\t=Pemabayaran Susu Bayi Merek X=\n");
         totalX=merekX*40000;
         printf("Total Pembayaran Merek X : Rp.%li\n",totalX);
    }

    if(merekY>3)
    {
        printf("\n\t=Pemabayaran Susu Bayi Merek Y=\n");
        printf("-Selamat Anda Mendapatkan Diskon 12 persen-\n");

        hargaY=merekY*50000;
        diskonY=hargaY*0.12;
        totalY=hargaY-diskonY;

        printf("Diskon Rp.%li\n",diskonY);
        printf("Total Pembayaran Merek X : Rp.%li\n",totalY);
    }
    else
    {
       printf("\n\t=Pemabayaran Susu Bayi Merek Y=\n");
       totalY=merekY*50000;
       printf("Total Pembayaran Merek X : Rp.%li\n",totalY);
    }
    if(merekZ>1)
    {
        printf("\n\t=Pemabayaran Susu Bayi Merek Z=\n");
        printf("-Selamat Anda Mendapatkan Diskon 15 persen-\n");

        hargaZ=60000;
        hargaZ_1=(merekZ-1)*60000;
        diskonZ=hargaZ*0.15;
        totalZ=(hargaZ+hargaZ_1)-diskonZ;

        printf("Diskon Rp.%li\n",diskonZ);
        printf("Total Pembayaran Merek X : Rp.%li\n\n",totalZ);
    }
    else
    {
        printf("\n\t=Pemabayaran Susu Bayi Merek Z=\n");
        totalZ=merekZ*60000;
        printf("Total Pembayaran Merek X : Rp.%li\n\n",totalZ);
    }

    total_keseluruhan=totalX+totalY+totalZ;
    printf("Total Pemabayaran Anda : Rp.%li\n",total_keseluruhan);
}
