#include "stdio.h"

void main()
{
    int v,p,l,t,L,pilih,a,b,kali,tambah,kurang,div,mod,batas,angka,huruf,i,tugas,n_tugas,quiz,n_quiz,uts,n_uts,uas,n_uas,n_akhir,fakt,n;
    float bagi;

    printf("Menu Pilihan :\n");
    printf("1. Faktorial\n");
    printf("2. Balok (luas Permukaan dan volume)\n");
    printf("3. Kalkulator \n");
    printf("4. Pola Bilangan (1A 2B 3C 4D)\n");
    printf("5. Konvensikan Nilai \n");

    printf("\nPilih Menu : ");
    scanf("%i",&pilih);

    switch(pilih)
    {
        case 1 : printf("\nMenu Faktorial\n");
                printf("Nilai Faktorial :");
                scanf("%i",&n);
                fakt=1;

                for(i=1;i<=n;i++)
                {
                  fakt=fakt*i;
                }
                printf("\n Faktorial %i : %i\n",n,fakt);
                break;

        case 2 : printf("\nMenu\n");
                printf("\nMasukkan Nilai Pajang :");
                scanf("%i",&p);
                printf("Masukkan Nilai Lebar :");
                scanf("%i",&l);
                printf("Masukkan Nilai Tinggi :");
                scanf("%i",&t);
                printf("\nRumus Volume : P*L*T\n");
                v = p*l*t;
                printf("Volume : %i",v);
                printf("\n\nLuas Permukaan : (pl+pt+lt)\n");
                L = (p*l)+(p*t)+(l*t);
                printf("Luas Permukaan : %i\n",L);
                break;

        case 3 : printf("Menu Kalkulator\n\n");
                printf("angka pertama :");
                scanf("%i",&a);
                printf("Angka Kedua :");
                scanf("%i",&b);
                tambah = a+b;
                printf("\nPertambahan : %i",tambah);
                kurang = a-b;
                printf("\nPerkurangan : %i",kurang);
                kali = a*b;
                printf("\nPerkalian : %i",kali);
                bagi = a/b;
                printf("\nPermbagian : %0.2f",bagi);
                div = a/b;
                printf("\nHasil Bagi : %i",div);
                mod = a%b;
                printf("\nSisa Bagi : %i",mod);
                break;

        case 4 : printf("\nMenu Pola");
                printf("\nMasukkan Batas : ");
                scanf("%i",&batas);

                angka = 1;
                huruf = 'A';

                for(i=1;i<=batas;i++)
                {
                    if(i%2!=0)
                    {
                        printf("%i\t",angka++);
                    }
                    else
                    {
                        printf("%c\t",huruf++);
                    }
                }
                break;

        case 5 : printf("\nMenu Konversi");

                printf("\n\nMasukkan Nilai Tugas :");
                scanf("%i",&tugas);
                n_tugas = tugas*0.1;
                printf("Nilai Tugas : %i",n_tugas);

                printf("\nMasukkan Nilai Quiz :");
                scanf("%i",&quiz);
                n_quiz = quiz*0.2;
                printf("Nilai Quiz : %i",n_quiz);

                printf("\nMasukkan Nilai UTS :");
                scanf("%i",&uts);
                n_uts = uts*0.3;
                printf("Nilai UTS : %i",n_uts);

                printf("\nMasukkan Nilai UAS :");
                scanf("%i",&uas);
                n_uas = uas*0.4;
                printf("Nilai UAS : %i\n",n_uas);

                n_akhir = n_tugas+n_quiz+n_uts+n_uas;
                printf("\nNilai Akhir : %i\n",n_akhir);

                if(n_akhir>=80 && n_akhir<=100)
                {
                    printf("Nilai Anda adalah A");
                }
                if(n_akhir>=66 && n_akhir<=79)
                {
                    printf("Nilai Anda adalah B");
                }
                if(n_akhir>=65 && n_akhir<=56)
                {
                    printf("Nilai Anda adalah C");
                }
                if(n_akhir>=46 && n_akhir<=55)
                {
                    printf("Nilai Anda adalah D");
                }
                if(n_akhir>=45 && n_akhir<=0)
                {
                    printf("Nilai Anda adalah E");
                }
                break;

        default : printf("Menu yang anda Pilih salah");
    }
}
