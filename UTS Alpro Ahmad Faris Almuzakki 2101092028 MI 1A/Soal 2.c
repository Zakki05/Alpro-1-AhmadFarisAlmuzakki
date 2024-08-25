/*** Nama       : Ahmad Faris Almuzakki
     No BP      : 2101092028
     Kelas      : MI 1A
     Deskripsi  : Berikut ini diberikan harga beberapa barang yang dijual di Toko Kue A.
                  Toko tersebut sedang perayaaan 7 tahun dan memberikan promo ke pelanggan dengan ketentuan sbb :
                  Cake	Rp. 15000, Diskon 7% diberikan untuk pembelian minimal 3 jenis cake.
                  Roti Rp. 12000, Diskon 17% diberikan untuk pembelian lebih dari 3 jenis roti.
                  Gulali	Rp. 9500, Diskon 27% diberikan untuk pembelian gulali ke 2, 3, dan seterusnya
                  harga gulai pertama tetap) .
                  Buatlah program yang menghitung total pembelian, diskon (jika ada), dan total pembayaran.
*/

#include "stdio.h"

void main()
{
    int cake,roti,gulali;
    long int harga_cake,diskon1,harga_roti,diskon2,harga_gulali,diskon3,total,uang,kembalian;

    printf("\tHARGA MAKANAN\n\n");
    printf("Harga Cake : Rp.15000\n");
    printf("Harga Roti : Rp.12000\n");
    printf("Harga Gulali : Rp. 9500\n");

    printf("Masukkan Jumlah cake :");
    scanf("%i",&cake);
    printf("Masukkan Jumlah Roti :");
    scanf("%i",&roti);
    printf("Masukkan Jumlah gulali :");
    scanf("%i",&gulali);

    if (cake >=3)
    {
        printf("\nSelamat Anda Mendapatkan Diskon 7 persen\n");
        harga_cake = cake*15000;
        printf("Harga Cake :%li\n",harga_cake);
        diskon1 = harga_cake*0.07;
        printf("Diskon Cake :%li\n",diskon1);
        total = harga_cake-diskon1;
        printf("Total Harga Cake :%li\n",total);
    }
    else
    {
        printf("\nAnda Tidak Mendapatkan Diskon\n");
        harga_cake = cake*15000;
        printf("Total Harga Cake :%li\n",harga_cake);
    }
    if (roti >3)
    {
        printf("\nSelamat Anda Mendapatkan Diskon 17 persen\n");
        harga_roti = roti*12000;
        printf("Harga Roti :%li\n",harga_roti);
        diskon2 = harga_roti*0.17;
        printf("Diskon :%li\n",diskon2);
        total = harga_roti-diskon2;
        printf("Total Harga Roti :%li\n",total);
    }
    else
    {
        printf("\nAnda Tidak Mendapatkan Diskon\n");
        harga_roti = roti*12000;
        printf("Total Harga Cake :%li\n",harga_cake);
    }
    if (gulali >=2)
    {
        printf("\nSelamat Anda Mendapatkan Diskon 27 persen\n");
        harga_gulali = gulali*9500;
        printf("Harga Gulali :%li\n",harga_gulali);
        diskon3 = harga_gulali*0.27;
        printf("Diskon :%li\n",diskon3);
        total = harga_gulali-diskon3;
        printf("Total Harga gulali :%li\n",total);
    }
    else
    {
        printf("\nAnda Tidak Mendapatkan Diskon\n");
        harga_gulali = gulali*9500;
        printf("Total Harga Gulali :%li\n",harga_gulali);
    }
}
