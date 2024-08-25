/*** Nama       :
     Pembuat    :
     Tanggal    :
     Deskripsi  :
*/

#include "stdio.h"

void main()
{
    int i,nilai_faktorial,jumlah;
    printf("\tMencari Nilai Faktorial\n\n");
    printf("Angka Faktorial : ");
    scanf("%i",&nilai_faktorial);
    jumlah = 1;

    for(i=nilai_faktorial ; i>=1 ; i--)
    {
        printf("%i*",i);
        jumlah = jumlah*i;
    }
    printf("\n%i!=",nilai_faktorial);
    printf("%i",jumlah);
}
