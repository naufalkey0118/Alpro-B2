// Nama File    : no.39 //
// Nama program : CekPrima //
// Deskripsi    : mengecek suatu i bilangan integer sembarang > 0 termasuk bilangan PRIMA atau BUKAN //
// Nama         : Divia Shinta Sukarsaatmadja //
// NIM          : 24060121140104 //
// Kelas  		: Informatika B //
// Tanggal      : Kamis, 31 Maret 2022 //

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Kamus
	int i;
	int b;
	int A;
	
	//Algoritma
	printf("Program Mengecek Bilangan Prima \n");
	printf("Masukan Bilangan Integer : ");
	scanf("%d", &i);
	A = 0;
	if (i > 0){
		for (b = 2; b < i; b++) {
            if (i % b == 0 ) {
                A = 1;
                break;
            }
        }
        if (A == 1) {
            printf("%d BUKAN Bilangan prima", i);
        }
        else {
            printf("%d Bilangan prima", i);
        }
	}
	else{
        printf("Masukan Bilangan Harus Positif");
	}
	
	return 0;
}
