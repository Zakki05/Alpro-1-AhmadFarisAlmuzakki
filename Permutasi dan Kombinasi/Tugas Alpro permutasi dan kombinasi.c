/**Program  : Tugas Permutasi dan Kombinasi
   Nama     : Ahmad Faris Almuzakki
   No BP    : 2101092028
   Kelas    : MI 1A
   Deskripsi: Mencari nilai permutasi dan kombinasi
*/

#include "stdio.h"

void main()
{
    int i,a,b,c,pilih;
    long int fakt1,fakt2,fakt3,permutasi,kombinasi;

    printf("\t==MENCARI NILAI PERMUTASI DAN KOMBINASI==\n\n");
    printf("1 = Permutasi \n2 = kombinasi \n");
    printf("Pilih nilai yang mau di cari (1/2) : ");
    scanf("%i",&pilih);

    printf("\nMasukkan Nilai dengan ketentuan A>B\n");
    printf("Masukkan Nilai A :");
    scanf("%i",&a);
    printf("Masukkan Nilai B :");
    scanf("%i",&b);
    fakt1 = 1;
    fakt2 = 1;
    fakt3 = 1;
    c = a-b;

    if (pilih == 1)
    {
        if (a>b)
        {
            printf("\n\t==Mencari Nilai Permutasi==\n");
            printf("Rumus : aPb = a!/b!\n");
            for (i=1;i<=a;i++)
            {
                fakt1 = fakt1 * i;
            }
            printf("Nilai Faktorial dari a : %i! = %li\n",a,fakt1);
            for (i=1;i<=b;i++)
            {
                fakt2 = fakt2 * i;
            }
            printf("Nilai Faktorial dari b : %i! = %li\n",b,fakt2);
            permutasi = fakt1/fakt2;
            printf("Nilai Permutasi = %li",permutasi);
        }
        else
        {
            printf("\n==Format Angka Yang Anda Masukkan Salah==");
        }
    }
    else
    {
        if (a>b)
        {
            printf("\n\t==Mencari Nilai Kombinasi==\n");
            printf("Rumus : aCb = a!/(b!*c!)\n");
            for (i=1;i<=a;i++)
            {
                fakt1 = fakt1 * i;
            }
            printf("Nilai Faktorial dari a : %i! = %li\n",a,fakt1);
            for (i=1;i<=b;i++)
            {
                fakt2 = fakt2 * i;
            }
            printf("Nilai Faktorial dari b : %i! = %li\n",b,fakt2);
            for(i=1;i<=c;i++)
            {
                fakt3 = fakt3 * i;
            }
            printf("Nilai C = A-B\n");
            printf("Nilai Faktorial dari c : %i! = %li\n",c,fakt3);
            kombinasi = fakt1/(fakt2*fakt3);
            printf("Nilai Kombinasi = %li",kombinasi);
        }
        else
        {
            printf("\n==Format Angka Yang Anda Masukkan Salah==");
        }
    }
}
