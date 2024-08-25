/** Nama File   :
    Pembuat     :
    Tanggal     :
    Deskripsi   :
*/

#include "stdio.h"
void main()
{
    int angka;

    printf("Masukkan Angka :");
    scanf("%i",&angka);

    if (angka==0)
    {
        printf("angka %i adalah Bilangan Netral",angka);
    }
    else if (angka%2!=0)
    {
        printf("angka %i adalah Bilangan Ganjil",angka);
    }
    else if (angka%2==0)
    {
        printf("angka %i adalah Bilangan Genap",angka);
    }
}
