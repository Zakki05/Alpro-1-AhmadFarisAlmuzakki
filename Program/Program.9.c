/**Program  : Program6.c
   Nama     : Mutiara Maharani
   Tanggal  : 02 okt 2021
   Deskripsi: Menghitung luas persegi panjang
*/

#include "stdio.h"
void main()
{
    int jam, menit,detik,jum_detik;
    int sisa;

    ///jum_detik = 3661
    printf("Masukkan Jumlah Detik =");
    scanf("%i",&jum_detik);

    jam = jum_detik/3600;
    sisa = jum_detik%3600;
    menit = jum_detik/60;
    detik = sisa%60;

    printf("\n Jam=%i,menit=%i,detik=%i",jam,menit,detik);
}
