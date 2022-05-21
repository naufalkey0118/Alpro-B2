// Nama File    : no.37 //
// Nama program : Kuadran //
// Deskripsi    : melakukan pengecekan mengenai kuadran sebuah titik P //
// Nama         : Divia Shinta Sukarsaatmadja //
// NIM          : 24060121140104 //
// Kelas  		: Informatika B //
// Tanggal      : Kamis, 31 Maret 2022 //

#include <stdio.h>

int main(){
	//Kamus
	int a;
	int b;

	//Algoritma
	printf("Menentukan Kuadran Titik P");
	printf("Masukan koordinat a : ");
	scanf("%d", &a);
	printf("Masukan koordinat b : ");
	scanf("%d", &b);
	
	if(a > 0 && b > 0)
		printf("Kuadran I");
	else if(a < 0 && b > 0)
		printf("Kuadran II");
	else if(a < 0 && b < 0)
		printf("Kuadran III");
	else if(a > 0 && b < 0)
		printf("Kuadran IV");
	else
		printf("Titik Nol");
	return 0;
}
