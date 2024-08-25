/** program   : Program4.c
    Nama      : Ahmad Faris Almuzakki
    No BP     : 2101092028
    Kelas     : MI 1A
    Deskripsi : Pengenalan Bahasa C (Output)
*/

#include "stdio.h"

void main ()

{
    int a,b,kali,tambah,kurang,mod,div;
    float bagi;

    a=10;
    b=3;

    kali = a*b;
    bagi = (float)a/b;
    tambah = a+b;
    kurang = a-b;
    div = a/b;
    mod =a%b;

    printf("hasil kali\t = %i\n",kali) ;
    printf("hasil bagi\t = %0.2f\n",bagi) ;
    printf("hasil tambah\t = %i\n",tambah) ;
    printf("hasil kurang\t = %i\n",kurang) ;
    printf("hasil div\t = %i\n",div) ;
    printf("hasil mod\t = %i\n",mod) ;

    a++;
    b--;

    printf("hasil a saat ini\t = %i\n",a) ;
    printf("hasil b saat ini\t = %i\n",b) ;

}
