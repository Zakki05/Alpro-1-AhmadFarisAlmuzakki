/**Program  : Tugas 1
   Nama     : Ahmad Faris Almuzakki
   No BP    : 2101092028
   Kelas    : MI 1A
   Deskripsi: Sebuah toko menjual tiga macam produk barang yaitu buku, pena dan pensil,
              dimana harga untuk tiap-tiap barang adalah sebagai berikut ini :
              Buku		: @ Rp 3000
              Pena		: @ Rp 2500
              Pensil		: @ Rp 2000
              Inputkan jumlah pembelian untuk masing-masing item (buku, pena dan pensil )
              hitung total pembayaran untuk konsumen serta setiap total pembayaran akan
              dikenakan pajak 10 % hitung juga besar pajak dan total setelah pajak.
*/

#include "stdio.h"

void main ()
{
    int buku,pena,pensil,jumlah_buku,jumlah_pena,jumlah_pensil,total_pembayaran;
    float pajak,total_pembayaran_akhir;

    printf("jumlah buku :",buku);
    scanf("%i",&buku);
    printf("jumlah pena :",pena);
    scanf("%i",&pena);
    printf("jumlah pensil :",pensil);
    scanf("%i",&pensil);

    jumlah_buku = buku*3000;
    printf("Harga Buku:%i\n",jumlah_buku);
    jumlah_pena = pena*2500;
    printf("Harga Pena:%i\n",jumlah_pena);
    jumlah_pensil = pensil*2000;
    printf("Harga Pensil:%i\n",jumlah_pensil);

    total_pembayaran = jumlah_buku+jumlah_pena+jumlah_pensil;
    printf("total pembayaran :%i\n",total_pembayaran);

    pajak = 0.1*total_pembayaran;
    printf("pajak :%0.1f\n",pajak);

    total_pembayaran_akhir = total_pembayaran+pajak;
    printf("total pembayaran akhir :%0.1f",total_pembayaran_akhir);
}

