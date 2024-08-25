/**Program  : Tugas 4
   Nama     : Ahmad Faris Almuzakki
   No BP    : 2101092028
   Kelas    : MI 1A
   Deskripsi: Buat program yang meminta input sebuah angka, tentukan berapa jumlah ribuan,
              ratusan, puluhan dan satuan dari angka yang diinputkan user tersebut .
*/

#include "stdio.h"
 void main()

 {
     int angka,ribuan,ratusan,puluhan,satuan,angka_sisa1,angka_sisa2,angka_sisa3;

     printf("Masukkan angka :",angka);
     scanf("%i",&angka);

     ribuan = angka/1000;
     printf("Ribuan :%i\n",ribuan);

     angka_sisa1 = angka%1000;
     ratusan = angka_sisa1/100;
     printf("Ratusan :%i\n",ratusan);

     angka_sisa2 = angka%100;
     puluhan = angka_sisa2/10;
     printf("Puluhan :%i\n",puluhan);

     angka_sisa3 = angka%10;
     satuan = angka_sisa3/1;
     printf("Satuan :%i\n",satuan);
 }
