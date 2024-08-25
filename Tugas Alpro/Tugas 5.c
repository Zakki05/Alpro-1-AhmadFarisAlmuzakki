/**Program  : Tugas 5
   Nama     : Ahmad Faris Almuzakki
   Kelas    : MI 1A
   Deskripsi: Seorang petugas akan menghitung total bayar untuk paket yang dikirimkan
              oleh konsumen, total bayar dihitung dari berat paket (kg) x 2000 x jarak antar
              dari paket tersebut, dimana setiap km dari jarak tempuh paket tersebut akan
              dikenakan biaya 500 rupiah. Buat program untuk kasus tersebut dengan meminta
              input berat paket dalam (kg) dan jarak tempuh (km).
*/
 #include "stdio.h"

 void main()
 {
     int jarak,berat,paket,pengiriman,total_pembayaran_akhir;
     printf("Jarak Paket (km) :",jarak);
     scanf("%i",&jarak);
     printf("Berat Paket (Kg) :",berat);
     scanf("%i",&berat);

     paket = berat*2000*jarak;
     printf("Biaya Paket :%i\n",paket);

     pengiriman = jarak*500;
     printf("pengiriman :%i\n",pengiriman);

     total_pembayaran_akhir = paket + pengiriman;
     printf("Total Pembayaran Akhir :%i",total_pembayaran_akhir);
 }
