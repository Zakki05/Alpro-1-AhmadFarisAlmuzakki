/*** Nama       : Ahmad Faris Almuzakki
     No BP      : 2101092028
     Kelas      : MI 1A
     Deskripsi  : Tugas Menghitung Harga Tiket
*/

#include "stdio.h"

void main()
{
    int tujuan,kelas,tiket;
    long int tiket1,tiket2,uang,kembalian,harga,bayar,diskon,total;

    printf("tujuan/kelas\tEkonomi\tbisnis\teksekutif\n");
    printf("Pekanbaru \t50000 \t60000 \t70000\n");
    printf("Dumai \t\t40000 \t45000 \t55000\n");
    printf("Batam \t\t75000 \t85000 \t95000\n");
    printf("-----------------------------------------\n");

    printf("Masukkan Tujuan :");
    scanf("%i",&tujuan);
    printf("Masukkan Kelas :");
    scanf("%i",&kelas);
    printf("Masukkan Jumlah Tiket :");
    scanf("%i",&tiket);

    if(tujuan==1 && kelas==1)
    {
        printf("tujuan pekanbaru kelas ekonomi\n");
        total = tiket*50000;
        printf("Total Bayar : %li\n",total);
        printf("Uang Anda :");
        scanf("%li",&uang);
        kembalian = uang - total;
        printf("Uang Kembalian : %li",kembalian);
    }
    else if(tujuan==1 && kelas==2)
    {
        printf("tujuan pekanbaru kelas bisnis\n");
        total = tiket*60000;
        printf("Total Bayar : %li\n",total);
        printf("Uang Anda :");
        scanf("%li",&uang);
        kembalian = uang - total;
        printf("Uang Kembalian : %li",kembalian);
    }
    else if (tujuan ==1 && kelas==3)
    {
        if(tiket>3)
        {
            printf("tujuan pekanbaru kelas eksekutif\n");
            tiket1 = 3*70000;
            tiket2 = (tiket-3)*70000;
            diskon = tiket2*0.05;
            total = tiket1+(tiket2-diskon);
            printf("Total Bayar : %li\n",total);
            printf("Uang Anda :");
            scanf("%li",&uang);
            kembalian = uang - total;
            printf("Uang Kembalian : %li",kembalian);
        }
        else if (tiket<=3)
        {
            printf("tujuan pekanbaru kelas eksekutif\n");
            total = tiket*70000;
            printf("Total Bayar : %li\n",total);
            printf("Uang Anda :");
            scanf("%li",&uang);
            kembalian = uang - total;
            printf("Uang Kembalian : %li",kembalian);
        }
    }
    else if (tujuan==2 && kelas==1)
    {
        printf("tujuan Dumai kelas ekonomi\n");
        total = tiket*40000;
        printf("Total Bayar : %li\n",total);
        printf("Uang Anda :");
        scanf("%li",&uang);
        kembalian = uang - total;
        printf("Uang Kembalian : %li",kembalian);
    }
    else if (tujuan==2 && kelas==2)
    {
        printf("tujuan Dumai kelas bisnis\n");
        total = tiket*45000;
        printf("Total Bayar : %li\n",total);
        printf("Uang Anda :");
        scanf("%li",&uang);
        kembalian = uang - total;
        printf("Uang Kembalian : %li",kembalian);
    }
    else if (tujuan==2 && kelas==3)
    {
        printf("tujuan Dumai kelas eksekutif\n");
        total = tiket*55000;
        printf("Total Bayar : %li\n",total);
        printf("Uang Anda :");
        scanf("%li",&uang);
        kembalian = uang - total;
        printf("Uang Kembalian : %li",kembalian);
    }
    else if (tujuan==3 && kelas==1)
    {
        printf("tujuan batam kelas ekonomi\n");
        total = tiket*75000;
        printf("Total Bayar : %li\n",total);
        printf("Uang Anda :");
        scanf("%li",&uang);
        kembalian = uang - total;
        printf("Uang Kembalian : %li",kembalian);
    }
    else if (tujuan==3 && kelas==2)
    {
        printf("tujuan batam kelas bisnis\n");
        total = tiket*85000;
        printf("Total Bayar : %li\n",total);
        printf("Uang Anda :");
        scanf("%li",&uang);
        kembalian = uang - total;
        printf("Uang Kembalian : %li",kembalian);
    }
    else if (tujuan==3 && kelas==3)
    {
        if(tiket>3)
        {
            printf("tujuan batam kelas eksekutif\n");
            tiket1 = tiket*95000;
            diskon = tiket1*0.1;
            total = tiket1-diskon;
            printf("Total Bayar : %li\n",total);
            printf("Uang Anda :");
            scanf("%li",&uang);
            kembalian = uang - total;
            printf("Uang Kembalian : %li",kembalian);
        }
        else if (tiket<=3)
        {
            printf("tujuan batam kelas eksekutif\n");
            total = tiket*95000;
            printf("Total Bayar : %li\n",total);
            printf("Uang Anda :");
            scanf("%li",&uang);
            kembalian = uang - total;
            printf("Uang Kembalian : %li",kembalian);
        }
    }
}
