/*** Nama       : Ahmad Faris Almuzakki
     No BP      : 2101092028
     Kelas      : MI 1A
     Deskripsi  : sebuah univeritas memberlakukan yudisium cumlaude untuk
                  mahasiswa yang lulus dengan IPK lebih besar sama dengan 3.5
                  dan masa kuliah tidak lebih dari 4 tahun. Bagaimana program penentuan yudisiumnya
*/

#include "stdio.h"

void main()
{
    int lama_kuliah;
    char nama;
    float ipk;

    printf("\tLulusan Universitas\n");
    printf("Nama Panggilan Anda :");
    scanf("%s",&nama);
    printf("Nilai IPK :");
    scanf("%f",&ipk);
    printf("Lama Kuliah (Tahun) :");
    scanf("%i",&lama_kuliah);

    if (ipk >=3.5)
    {
        if (lama_kuliah <=4)
        {
            printf("Selamat Anda Termasuk Lulusan Yudisium Cumlaude");
        }
        else if (lama_kuliah >4)
        {
            printf("Anda Bukan Lulusan Yudisium Cumlaude");
        }
    }
    else if (ipk <3.5)
    {
        printf("Anda Bukan Lulusan Yudisium Cumlaude");
    }
}
