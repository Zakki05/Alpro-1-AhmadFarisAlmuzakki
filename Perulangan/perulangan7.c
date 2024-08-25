/*** Nama       :
     Pembuat    :
     Tanggal    :
     Deskripsi  :
*/

#include "stdio.h"

void main()
{
    int i,batas,angka;
    char huruf;

    angka = 1;
    huruf = 'A';
    printf("Masukkan batasan :");
    scanf("%i",&batas);

    for(i=1 ; i<=batas ; i++)
    {
        if(i%2!=0)
        {
            printf("%i\t",angka);
            angka++;
        }
        else
        {
            printf("%c\t",huruf);
            huruf++;
        }
    }
}
