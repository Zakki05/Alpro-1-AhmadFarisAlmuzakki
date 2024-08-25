/*** Nama       :
     Pembuat    :
     Tanggal    :
     Deskripsi  :
*/

#include "stdio.h"

void main()
{
    int i,batas_akhir,total,max,min;
    float rata2;
    total =0;
    max = -999;
    min = 999;

    printf("Batas Akhir :");
    scanf("%i",&batas_akhir);

    for (i=1;i<=batas_akhir;i++)
    {
        total=total+i;
        rata2=(float)total/batas_akhir;
        if (i>max)
        {
            max = i;
        }
        if (i<min)
        {
            min = i;
        }
    }

    printf("Total : %i\n",total);
    printf("Rata-rata : %0.2f\n",rata2);
    printf("Max : %i\n",max);
    printf("Min : %i",min);

}
