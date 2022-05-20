/*Nama File 	: TarifPLN.c*/
/*Deskripsi 	: Menghitung dan menampilkan berapa tarif PLN yang dikenakan pada layar */
/*Pembuat   	: Naufal Ariq Dwikurnia - 24060121140142*/
/*Tgl Pembuatan	: minggu, 20-03-2022 08:27 WIB*/


#include <stdio.h>

int main()
{

    //Kamus
    int g,jd,tarif,total;

    //Algoritma
    printf("Program Hitung Tarif PLN\n");
    printf("Masukan golongan tarif (1 - 2) : ");
    scanf("%d", &g);
    printf("Masukan jumlah pemakaian daya listrik /kWH : ");
    scanf("%d", &jd);
    if (g == 1){
        if (jd <= 100){
            total = 100000;
            printf("%d", total);
        }
        else if (jd < 1000){
            total = jd * 1000;
            printf("%d", total);
        }
        else{
            total = (jd * 1000) + (0.1 * (jd * 1000));
            printf("%d", total);
        }
    }
    else{
        if (jd <= 100){
            total = 200000;
            printf("%d", total);
        }
        else if (jd < 1000){
            total = jd * 2000;
            printf("%d", total);
        }
        else{
            total = (jd * 2000) + (0.1 * (jd * 2000));
            printf("%d", total);
    }
    return 0;
    }
}
