/*** Nama       :
     Pembuat    :
     Tanggal    :
     Deskripsi  :
*/

#include "stdio.h"

void main()
{
    char huruf;

    printf("Masukkan Huruf (Kapital) :");
    scanf("%c",&huruf);

    switch(huruf)
    {
        case 'A' :printf("Huruf yang dimasukkan adalah huruf vokal");
                break;
        case 'I' :printf("Huruf yang dimasukkan adalah huruf vokal");
                break;
        case 'U' :printf("Huruf yang dimasukkan adalah huruf vokal");
                break;
        case 'E' :printf("Huruf yang dimasukkan adalah huruf vokal");
                break;
        case 'O':printf("Huruf yang dimasukkan adalah huruf vokal");
                break;
        default :printf("Huruf yang dimasukkan adalah huruf konsonan");
    }
}
