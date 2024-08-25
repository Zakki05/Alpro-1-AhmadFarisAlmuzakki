/**Program  : Tugas 3
   Nama     : Ahmad Faris Almuzakki
   No Bp    : 2101092028
   Kelas    : MI 1A
   Deskripsi: Buat program yang menghitung umur seseorang dengan
              meminta input tahun sekarang dan tahun kelahirannya.
*/

#include "stdio.h"

void main()

{
    int tahun_kelahiran,tahun_sekarang,umur;

    printf("Tahun kelahiran :",tahun_kelahiran);
    scanf("%i",&tahun_kelahiran);
    printf("Tahun sekarang :",tahun_sekarang);
    scanf("%i",&tahun_sekarang);

    umur = tahun_sekarang-tahun_kelahiran;
    printf("Umur sekarang =%i",umur);

}
