/**Program  : program7.c
   Nama     : Ahmad Faris Almuzakki
   Tanggal  : 02 Okt 2021
   Deskripsi: Menghitung nilai kelvin, reamur, farenheit
*/

#include "stdio.h"

void main()
{
    int celcius,kelvin;
    float farenheit,reamur;

    celcius=32;

    kelvin=celcius+273;
    farenheit=(float) 9/5 * celcius + 32;
    reamur=(float) 4/5 * celcius;

    printf("Nilai Kelvin=%i\n",kelvin);
    printf("Nilai farenheit=%0.2f\n",farenheit);
    printf("Nilai reamur=%0.2f\n",reamur);


}
