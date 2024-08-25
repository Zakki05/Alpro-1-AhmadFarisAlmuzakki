/** Nama File   :
    Pembuat     :
    Tanggal     :
    Deskripsi   :
*/

#include "stdio.h"

void main ()
{
    int nilai;

    printf("Masukkan Nilai : ");
    scanf("%i",&nilai);

    if(nilai>70)
    {
        printf("Selamat Anda Lulus");
    }
    else if(nilai<70)
    {
        printf("Anda Tidak Lulus");
    }
}
