/*** Nama       :
     Pembuat    :
     Tanggal    :
     Deskripsi  :
*/

#include "stdio.h"

void main()
{
    int i,nilai_awal,nilai_akhir;
    printf("Nilai Awal :");
    scanf("%i",&nilai_awal);
    printf("Nilai Akhir :");
    scanf("%i",&nilai_akhir);

    if(nilai_awal<nilai_akhir)
    {
        for(i=nilai_awal ; i<=nilai_akhir ; i++)
        {
            printf("%i\t",i);
        }
    }
    else
    {
        for(i=nilai_awal ; i>=nilai_akhir ; i--)
        {
            printf("%i\t",i);
        }
    }
}
