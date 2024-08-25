/** Nama     : Ahmad Faris Almuzakki
   No BP     : 2101092028
   Kelas     : MI 1 A
   Deskripsi : Sebuah penyewaan kendaraan memberlakukan tarif sebagai berikut.
               Lama penyewaan minimal untuk dua jam dengan tarif 1000.
               Untuk jam berikutnya sampai dengan 12 jam tarif perjamnya adalah 400.
               Sedangkan untuk jam berikutnya sampai dengan 24 jam maka tarif perjamnya menjadi 300.
               Buatlah algoritma yang menentukan berapa yang harus dibayar konsumen untuk lama peminjaman tertentu.
               Input : lama peminjaman. Output : total pembayaran.
**////

#include "stdio.h"

void main()
{
    int lama_peminjaman;
    long int uang,kembalian,tarif1,tarif2,tarif3;

    printf("\t Tarif Peminjaman Kendaraan\n\n");
    printf("Lama Peminjaman kendaraan :");
    scanf("%i",&lama_peminjaman);

    if (lama_peminjaman <=2)
    {
        tarif1 = 1000;
        printf("Total Pembayaran peminjaman kendaraan :%i\n",tarif1);
        printf("Uang Anda :");
        scanf("%i",&uang);
        kembalian = uang-tarif1;
        printf("Uang Kembalian :%i",kembalian);
    }
    else if (lama_peminjaman >2 && lama_peminjaman <=12)
    {
        tarif1 = 1000;
        tarif2 = tarif1+(lama_peminjaman-2)*400;
        printf("Total Pembayaran Peminjaman Kendaraan :%li\n",tarif2);
        printf("Uang Anda :");
        scanf("%i",&uang);
        kembalian = uang-tarif2;
        printf("Uang Kembalian :%i",kembalian);
    }
    else if (lama_peminjaman >12 && lama_peminjaman <=24)
    {
        tarif1 = 1000;
        tarif2 = tarif1+4000;
        tarif3 = tarif1+tarif2+(lama_peminjaman-12)*300;
        printf("Total Pembayaran Peminjaman Kendaraan :%li\n",tarif3);
        printf("Uang Anda :");
        scanf("%i",&uang);
        kembalian = uang-tarif3;
        printf("Uang Kembalian :%i",kembalian);
    }
}

