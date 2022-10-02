//SINAV SONUCLARI TOPLAMI VE ORTALAMA HESAPLAMA
#include <stdio.h>

int main()
{
	float note = 0 ;
	float toplam = 0;
	float ort = 0;
	int toplam_ogrenci_sayisi;
	int not_sayisi;
	
	printf("Toplam ogreci sayisi:");
	scanf("%d", &toplam_ogrenci_sayisi);
	
	printf("Sinava giren ogrencilerin sayisi:");
	scanf("%d", &not_sayisi);
			
	if (toplam_ogrenci_sayisi >= not_sayisi)
	{
	printf("\nCikis icin gecerli olmayan not giriniz.\n\n");
	
	while (note >=0 && note <= 100)
	{
		toplam += note;
		ort = toplam / not_sayisi;		
		
		printf("Not girin:",note);
		scanf("%f", &note);
	
	}
	printf("Sinav sonuclarinin toplami: %.3f\nSinav sonuclarinin ortalamasi: %.3f", toplam, ort);
	
	}
	
	else
	{
		printf("\nSinava giren ogrencilerin sayisi toplam ogreci sayisindan fazla olamaz!\n\a");
	}
	return 0;
}
