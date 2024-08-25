/*** Nama       :
     Pembuat    :
     Tanggal    :
     Deskripsi  :
*/

#include "stdio.h"

void main()
{
   int i,n,jumlah;
   float rata2;
   jumlah=0;
   printf("Masukkan Batas :");
   scanf("%i",&n);
   i=1;

   while(i<=n)
   {
       printf("%i\t",i);
       jumlah = i+jumlah;
       i++;
   }
   rata2 = (float)jumlah/n;
   printf("\nJumlah = %i",jumlah);
   printf("\nRata-rata = %0.2f",rata2);
}
