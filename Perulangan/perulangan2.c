/*** Nama       :
     Pembuat    :
     Tanggal    :
     Deskripsi  :
*/

#include "stdio.h"

void main()
{
    int i,n,total;
    float rata2;
    total =0;

    printf("Batas Akhir :",n);
    scanf("%i",&n);

    for (i=1;i<=n;i++)
    {
        total = total+i;
        printf("%i\n",i);
    }

    printf("Total = %i\n",total);
    rata2 = (float)total/n;
    printf("Rata-rata = %0.2f",rata2);
}
