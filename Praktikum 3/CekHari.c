/*Nama File 	: CekHari*/
/*Deskripsi 	: Menampilkan nama-nama hari dari nomor hari yang dimasukkan pada layar*/
/*Pembuat       : [Ahmad Alvin Griffin - 24060121140106]*/
/*Tgl Pembuatan : [Minggu, 13 Maret 2022 04:40 WIB]*/

#include<stdio.h>

int main ()
{
    //kamus
    int H;
    //algoritma
    printf("Pengecekan Hari \n");
    printf("masukkan angka hari : ");
    scanf ( "%d", &H);

    switch (H) {
        case 1 :
            printf("ini adalah hari Senin!");
            break;
        case 2 :
            printf("ini adalah hari Selasa!");
            break;
        case 3 :
            printf("ini adalah hari Rabu!");
            break;
        case 4 :
            printf("ini adalah hari Kamis!");
            break;
        case 5 :
            printf("ini adalah hari Jum'at!");
            break;
        case 6 :
            printf("ini adalah hari Sabtu!");
            break;
        case 7 :
            printf("ini adalah hari Minggu!");
            break;
        default:
        printf("Masukkan hari tidak tepat!");
        }
    return 0;

}

