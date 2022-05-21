// Nama File    : no.38 //
// Nama program : JumDere41t //
// Deskripsi    : menghasilkan sebuah deret bilangan sesuai skema pemrosesan sekuensialnya //
// Nama         : Divia Shinta Sukarsaatmadja //
// NIM          : 24060121140104 //
// Kelas		: Informatika B //
// Tanggal      : Sabtu, 2 April 2022 //

#include <stdio.h>

int main (){
	//Kamus
	int N;
	int i;
	int j;
	int Sn;

	//Algoritma
	printf("Membuat Program susunan '*' \n");
	printf("Masukan nilai N (N > 0)  : ");
	scanf("%d", &N);
	j = 0;
	Sn = 0;
	
	if(N > 0)
	{
		for (i = 1; i <= N; i++)
		{
		    Sn = Sn + (0.5)*i*(i+1);
		    j = j + i;
			printf("%i,", j);
		}	
	}
	else
	{
		printf("Tidak ada Deret Bilangan, sehingga ");
	}
    printf("Sn= %i, ", Sn);
    
	return 0;
}


