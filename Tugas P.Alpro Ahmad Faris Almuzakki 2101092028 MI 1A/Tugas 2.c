/**Program  : Tugas 2
   Nama     : Ahmad Faris Almuzakki
   No BP    : 2101092028
   Kelas    : MI 1A
   Deskripsi: Seorang ibu mengirimkan anaknya uang dalam bentuk dolar
              (dimana harga 1 dolar sekarang adalah Rp 14 200). Konversikan uang tersebut kedalam rupiah,
              kemudian anak tersebut mau menukarkan uang tersebut ke dalam pecahan 100 ribu, 50 ribu, 20 ribu
              dan 5 ribu. Hitung juga jumlah pecahan uang yang diterima anak tersebut.
*/

#include "stdio.h"

void main()

{
    int dolar,rupiah,rp100,rp50,rp20,rp5,rps,rps1,rps2,jumlah;

    printf("jumlah dolar :",dolar);
    scanf("%i",&dolar);

    rupiah = dolar*14200;
    printf("konvensi ke rupiah =%i\n",rupiah);

    rp100 = rupiah/100000;
    printf("pecahan Rp100.000 =%i\n",rp100);

    rps = rupiah%100000;
    rp50 = rps/50000;
    printf("pecahan Rp50.000 =%i\n",rp50);

    rps1 = rupiah%50000;
    rp20 = rps1/20000;
    printf("pecahan Rp20.000 =%i\n",rp20);

    rps2 = rupiah%20000;
    rp5 = rps2/5000;
    printf("pecahan Rp5.000 =%i\n",rp5);

    jumlah = rp100+rp50+rp20+rp5;
    printf("Jumlah Pecahan Diterima :%i",jumlah);
}
