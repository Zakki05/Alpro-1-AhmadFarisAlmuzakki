/*** Nama       : Ahmad Faris Almuzakki
     No BP      : 2101092028
     Kelas      : MI 1A
     Deskripsi  : Diinputkan sebuah nilai yang mewakili berat dalam
                  kg(ada kemungkinan ). Buat algoritma yang mengkonversi
                  berat tersebut kedalam bentuk ton, kuintal, sak, kg.
                  1 ton = 1000 kg, 1 kuintal = 100 kg, 1 sak = 50 kg.
                  Misalkan diinputkan angka 2760, maka konversinya
                  adalah 2 ton, 7 kuintal, 1 sak, 10 kg.
*/

#include "stdio.h"

void main()
{
    long int b_barang;
    int ton,sisat,kw,sisakw,sak,kg;

    printf("\tKONVENSIKAN BERAT BARANG\n\n");
    printf("Masukkan Berat Barang \t\t:");
    scanf("%li",&b_barang);

    ton = b_barang/1000;
    printf("Konvensi dalam bentuk Ton \t:%i Ton \n",ton);

    sisat = b_barang%1000;
    kw = sisat/100;
    printf("Konvensi dalam bentuk kuintal \t:%i Kuintal \n",kw);

    sisakw = b_barang%100;
    sak = sisakw/50;
    printf("Konvensi dalam bentuk sak \t:%i Sak \n",sak);

    kg = sisakw%50;
    printf("Konvensi dalam bentuk kg \t:%i Kg",kg);
}
