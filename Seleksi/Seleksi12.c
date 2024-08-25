/*** Nama       :
     Pembuat    :
     Tanggal    :
     Deskripsi  :
*/

#include "stdio.h"

void main()
{
    int bangun_ruang,sisi,panjang,lebar,tinggi,jari2,luas_permukaan,volume;
    float luas_permukaan2,volume2,phi;

    printf("\t=Opsi Angka Pilihan Bangun Ruang=\n");
    printf("1 : kubus\n");
    printf("2 : balok\n");
    printf("3 : tabung\n");
    printf("4 : bola\n");
    printf("Masukkan Jenis Bangun Ruang (menurut angka) : ");
    scanf("%i",&bangun_ruang);

    switch(bangun_ruang)
    {
        case 1   : printf("Bangun Ruang yang anda pilih adalah Kubus\n");
                   printf("Masukkan Sisi : ");
                   scanf("%i",&sisi);
                   luas_permukaan = 6*sisi*sisi;
                   printf("Luas Permukaan : %i\n",luas_permukaan);
                   volume = sisi*sisi*sisi;
                   printf("Volume : %i",volume);
                   break;
        case 2   : printf("Bangun Ruang yang anda pilih adalah balok\n");
                   printf("Masukkan panjang : ");
                   scanf("%i",&panjang);
                   printf("Masukkan Lebar : ");
                   scanf("%i",&lebar);
                   printf("Masukkan Tinggi : ");
                   scanf("%i",&tinggi);
                   luas_permukaan = 2*(panjang*tinggi+panjang*lebar+lebar*tinggi);
                   printf("Luas Permukaan : %i\n",luas_permukaan);
                   volume = panjang*lebar*tinggi;
                   printf("Volume : %i",volume);
                   break;
        case 3   : printf("Bangun Ruang yang anda pilih adalah Tabung\n");
                   printf("Masukkan jari-jari : ");
                   scanf("%i",&jari2);
                   printf("Masukkan Tinggi : ");
                   scanf("%i",&tinggi);
                   phi = 3.14;
                   luas_permukaan2 = 2*phi*jari2*(jari2+tinggi);
                   printf("Luas Permukaan : %f\n",luas_permukaan2);
                   volume2 = phi*jari2*jari2*tinggi;
                   printf("Volume : %f",volume2);
                   break;
        case 4   : printf("Bangun Ruang yang anda pilih adalah Bola\n");
                   printf("Masukkan jari-jari : ");
                   scanf("%i",&jari2);
                   phi = 3.14;
                   luas_permukaan2 = 4*phi*jari2*jari2;
                   printf("Luas Permukaan : %f\n",luas_permukaan2);
                   volume2 = 0.75*phi*jari2*jari2*jari2;
                   printf("Volume : %f",volume2);
                   break;
        default : printf("Pilihan Angka Salah !!");
    }
}
