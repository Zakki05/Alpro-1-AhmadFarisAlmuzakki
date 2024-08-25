/**
1. Golongan 1 : 50.000
   Golongan 2 : 100.000
   jika tarif nya kurang sama dari 20, maka bayar pertarifnya 2000.
   jika tarif besar dari 20 maka pembayaran pertarifnya 3000.
   setiap tarif mendapatkan pajak 10%. berapa total pembayarannya
   **/

#include "stdio.h"

void main()
{
    int golongan,golongan1,tarif,pajak;
    long int total,golongan2,biaya,biaya1;

    printf("\tMenghitung Biaya Angkutan\n\n");
    printf("==Menu Golongan==\n");
    printf("Golongan 1 = 1 \nGolongan 2 = 2\n\n");
    printf("Tentukan Golongan :");
    scanf("%i",&golongan);
    printf("Masukkan Tarif Anda :");
    scanf("%i",&tarif);
    golongan1 = 50000;
    golongan2 = 100000;
    printf("\n================================\n\n");

    if(golongan == 1)
    {
        if(tarif<20)
        {
            printf("Anda termasuk golongan 1 dengan biaya Rp 50.000\n");
            biaya = tarif * 2000;
            printf("Biaya nya = %li\n",biaya);
            pajak = biaya * 0.1;
            printf("Pajak nya = %i\n",pajak);
            total = golongan1 + biaya + pajak;
            printf("Total pembayaran = %li",total);
        }
        else
        {
            printf("Anda termasuk golongan 1 dengan biaya Rp 50.000\n");
            biaya1 = 20 * 2000;
            biaya = biaya1 + (tarif-20)*3000;
            printf("Biaya nya = %li\n",biaya);
            pajak = biaya * 0.1;
            printf("Pajak nya = %i\n",pajak);
            total = golongan1 + biaya + pajak;
            printf("Total pembayaran = %li",total);
        }
    }
    else if (golongan == 2)
    {
        if(tarif<20)
        {
            printf("Anda termasuk golongan 2 dengan biaya Rp 100.000\n");
            biaya = tarif * 2000;
            printf("Biaya nya = %li\n",biaya);
            pajak = biaya * 0.1;
            printf("Pajak nya = %i\n",pajak);
            total = golongan2 + biaya + pajak;
            printf("Total pembayaran = %li",total);
        }
        else
        {
            printf("Anda termasuk golongan 2 dengan biaya Rp 100.000\n");
            biaya1 = 20 * 2000;
            biaya = biaya1 + (tarif-20)*3000;
            printf("Biaya nya = %li\n",biaya);
            pajak = biaya * 0.1;
            printf("Pajak nya = %i\n",pajak);
            total = golongan2 + biaya + pajak;
            printf("Total pembayaran = %li",total);
        }
    }
    else
    {
        printf("Inputan Anda Salah!!!");
    }
}
