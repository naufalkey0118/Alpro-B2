/*Nama File 	: CekSeriPositif*/
/*Deskripsi 	: Menampilkan nilai kebenaran apakah masukkan bernilai negative atau tidak pada layar*/
/*Pembuat       : [Ahmad Alvin Griffin - 24060121140106]*/
/*Tgl Pembuatan : [Minggu, 13 Maret 2022 04:40 WIB]*/

#include <stdio.h>

int main()
{

    //Kamus
    float t1,t2,t3,total;

    //Algoritma
    printf("Program untuk cek seri positif\n");
    printf("Masukan sebuah bilangan : ");
    scanf("%f", &t1);
    printf("Masukan sebuah bilangan : ");
    scanf("%f", &t2);
    printf("Masukan sebuah bilangan : ");
    scanf("%f", &t3);
    if (t1 >= 0 && t2 >= 0 && t3 >= 0){
            total = t1 + t2 + t3;
            printf("Maka total tahanan jika dirangkai seri adalah %.2f\n",total);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }


}
