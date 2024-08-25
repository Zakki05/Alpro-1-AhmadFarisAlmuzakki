/*** Nama       :
     Pembuat    :
     Tanggal    :
     Deskripsi  :
*/

#include "stdio.h"

void main()
{
    int i,batas,angka;

    angka =1;
    printf("Masukkan batasan :");
    scanf("%i",&batas);

    for(i=1 ; i<=batas ; i++)
    {
        if(i%2!=0)
        {
            printf("\t%i",angka);
            angka+=2;
        }
        else
        {
            printf(" 5 ");
        }
    }
}
