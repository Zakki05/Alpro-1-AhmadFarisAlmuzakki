/*** Nama       : Ahmad Faris Almuzakki
     No BP      : 2101092028
     Kelas      : MI 1A
     Deskripsi  : Buatlah program menentukan gaji total pegawai.
                  Diketahui pegawai dengan masa kerja lebih dari 3 tahun
                  mendapat tunjangan sebesar 20% gaji pokok sedang yang
                  kurang dari itu mendapat tunjangan 10%. Input program
                  adalah masa kerja dan gaji pokok.
*/

#include "stdio.h"

void main()
{
    long int lamakerja,gaji_pokok,tunjangan1,tunjangan2,gaji1,gaji2;

    printf("\tGaji Pegawai\n\n");
    printf("Lama Bekerja (Tahun) : ");
    scanf("%li",&lamakerja);
    printf("Gaji Pokok : ");
    scanf("%li",&gaji_pokok);

    if (lamakerja >3)
    {
        printf("Pegawai tersebut mendapat tunjangan 20 persen\n");
        tunjangan1 = gaji_pokok*0.2;
        printf("Tunjangan Pegawai : %li\n",tunjangan1);
        gaji1 = gaji_pokok+tunjangan1;
        printf("Gaji Pegawai : %li",gaji1);
    }
    else if (lamakerja <=3)
    {
        printf("Pegawai tersebut mendapat tunjangan 10 persen\n");
        tunjangan2 = gaji_pokok*0.1;
        printf("Tunjangan Pegawai : %li\n",tunjangan2);
        gaji2 = gaji_pokok+tunjangan2;
        printf("Gaji Pegawai : %li",gaji2);
    }
}
