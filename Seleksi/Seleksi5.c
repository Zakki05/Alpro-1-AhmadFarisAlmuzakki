/*** Nama       :
     Pembuat    :
     Tanggal    :
     Deskripsi  :
*/

#include "stdio.h"

void main()
{
    int umur;
    char jk;

    printf("Masukkan Jenis Kelamin (p/l) : ");
    scanf("%c",&jk);
    printf("Masukkan Umur :");
    scanf("%i",&umur);

    if(jk=='l')
    {
        if(umur>17)
        {
            printf("Silahkan Memilih");
        }
        else
        {
            printf("Maaf, Anda tidak dapat memilih");
        }
    }
    else if(jk=='p')
    {
        printf("Maaf,Anda tidak dapat memilih");
    }
}
