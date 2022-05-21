// Nama File    : no.36 //
// Nama program : IsiMatrik //
// Deskripsi    : mengisikan nilai pada elemen-elemen matrik yang memiliki ordo sama (M x N) sesuai aturan //
// Nama         : Divia Shinta Sukarsaatmadja //
// NIM          : 24060121140104 //
// Kelas  		: Informatika B //
// Tanggal      : Kamis, 31 Maret 2022 //

#include <stdio.h>

int main(){
	//Kamus
	int M;
	int N;
	int i;
	int j;

	//Algoritma
	printf("Menampilkan Matriks M x N\n");
	printf("Masukan Ordo Baris (M): ");
	scanf("%d", &M);
	printf("Masukan Ordo Kolom (N): ");
	scanf("%d", &N);
	if(M == N && M > 0 && N > 0)
	{
        for(i = 1; i <= M; i++)
		{
            for(j = 1; j <= N; j++)
			{
                if(i == j)
				{
                    printf("1 ");
                }
                else if (j > i)
				{
                    printf("0 ");
                }
                else
				{
                    printf("2 ");
                }
            }
            printf("\n");
        }
    }
    
	else
	{
		printf("Nilai M dan N harus sama");
	}
	return 0;
}
