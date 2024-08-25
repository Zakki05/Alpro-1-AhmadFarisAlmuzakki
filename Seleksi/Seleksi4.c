/** Nama        : Ahmad Faris Almuzakki
    No BP       : 2101092028
    Kelas       : MI 1A
    Deskripsi   : input Nilai Tugas,UTS,UAS,Total Nilai,Rata-rata,dan konvensikan ke huruf
                  A = 81-100
                  B = 76-80
                  C = 56-75
                  D = 46-55
                  E = 0-45
*/

#include "stdio.h"

void main()
{
    int tugas,uts,uas,total_nilai,rata_rata;

    printf("Nilai Tugas :");
    scanf("%i",&tugas);

    printf("Nilai UTS :");
    scanf("%i",&uts);

    printf("Nilai UAS :");
    scanf("%i",&uas);

    total_nilai = (tugas+uts+uas);
    printf("\nTotal Nilai : %i\n",total_nilai);

    rata_rata = total_nilai /3;
    printf("Rata-Rata : %i\n\n",rata_rata);

    if (rata_rata <=45)
    {
        printf("Nilai Anda : E");
    }
    else if (rata_rata<=55)
    {
        printf("Nilai Anda : D");
    }
    else if (rata_rata<=75)
    {
        printf("Nilai Anda : C");
    }
    else if (rata_rata<=80)
    {
        printf("Nilai Anda : B");
    }
    else if (rata_rata<=100)
    {
        printf("Nilai Anda : A");
    }
}
