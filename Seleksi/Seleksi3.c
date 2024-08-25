/** Nama File   :
    Pembuat     :
    Tanggal     :
    Deskripsi   :
*/

#include "stdio.h"

void main()
{
    int pensil,harga_pensil,buku,harga_buku,penggaris,harga_penggaris,bayar,diskon,totalbayar;

    printf("Jumlah pensil :");
    scanf("%i",&pensil);

    printf("Jumlah Buku :");
    scanf("%i",&buku);

    printf("Jumlah Penggaris :");
    scanf("%i",&penggaris);

    harga_pensil = pensil*1500;
    printf("Harga Pensil :%i\n",harga_pensil);
    harga_buku = buku*2000;
    printf("Harga Buku :%i\n",harga_buku);
    harga_penggaris = penggaris*2500;
    printf("Harga Penggaris :%i\n",harga_penggaris);

    bayar = harga_buku+harga_pensil+harga_penggaris;
    if (bayar<10000)
    {
        printf("Maaf Anda Tidak Mendapatkan Diskon\n");
        printf("Total Bayar :%i",bayar);
    }
    else if (bayar>10000)
    {
       printf("Selamat Anda Mendapatkan Diskon\n");
       diskon = bayar * 0.1;
       printf("diskon :%i\n",diskon);
       totalbayar = bayar-diskon;
       printf("Total Bayar :%i",totalbayar);
    }
}
