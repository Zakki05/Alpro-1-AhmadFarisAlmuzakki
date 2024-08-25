/*** Nama       :
     Pembuat    :
     Tanggal    :
     Deskripsi  :
*/

#include "stdio.h"

void main()
{
    int golongan,jam;
    long int gaji_pokok,gaji_perjam,gaji_lembur,total_gaji;

    printf("Masukkan Jenis Golongan :");
    scanf("%i",&golongan);
    printf("Masukkan Jam :");
    scanf("%i",&jam);

    if (golongan ==1)
    {
        if (jam>10)
        {
            printf("Anda adalah Staff\n");
            gaji_pokok = 50000;
            printf("Gaji Pokok :%li\n",gaji_pokok);
            gaji_perjam = 10*5000;
            printf("Gaji Perjam :%li\n",gaji_perjam);
            gaji_lembur = (jam-10)*4000;
            printf("Gaji Lembur :%li\n",gaji_lembur);
            total_gaji = (gaji_pokok+gaji_perjam+gaji_lembur);
            printf("Total Gaji :%li\n",total_gaji);
        }
        else if (jam<=10)
        {
            printf("Anda adalah Staff\n");
            gaji_pokok = 50000;
            printf("Gaji Pokok :%li\n",gaji_pokok);
            gaji_perjam = jam*5000;
            printf("Gaji Perjam :%li\n",gaji_perjam);
            total_gaji = (gaji_pokok+gaji_perjam);
            printf("Total Gaji :%li\n",total_gaji);
        }
    }
    else if (golongan ==2)
    {
        if (jam>10)
        {
            printf("Anda adalah Non Staff\n");
            gaji_pokok = 25000;
            printf("Gaji Pokok :%li\n",gaji_pokok);
            gaji_perjam = 10*2000;
            printf("Gaji Perjam :%li\n",gaji_perjam);
            gaji_lembur = (jam-10)*2000;
            printf("Gaji Lembur :%li\n",gaji_lembur);
            total_gaji = (gaji_pokok+gaji_perjam+gaji_lembur);
            printf("Total Gaji :%li\n",total_gaji);
        }
        else if (jam<=10)
        {
            printf("Anda adalah Non Staff\n");
            gaji_pokok = 25000;
            printf("Gaji Pokok :%li\n",gaji_pokok);
            gaji_perjam = jam*2000;
            printf("Gaji Perjam :%li",gaji_perjam);
            total_gaji = (gaji_pokok+gaji_perjam);
            printf("Total Gaji :%li",total_gaji);
        }
    }
}
