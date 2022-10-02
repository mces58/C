// SQRT FONKSIYONU 
/*
math.h dahil edilir.

bu bir matematik fonksiyonudur.Saynin karekokunu bulur

sqrt= square root'tan gelmekte anlmai karekok demek

*/

#include <stdio.h>
#include <math.h>

int main()
{
	int sayi;
	double sonuc;
	
	printf("Bir sayi giriniz...\n");
	
	scanf("%d",&sayi);
	
	sonuc = sqrt(sayi);
	
	printf("Karekoku: %.2lf",sonuc);
	
	//printf("Karekoku: %.2f",sqrt(sayi));
	
	return 0;
}
