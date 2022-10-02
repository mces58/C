#include <stdio.h>
struct pc
{
	char marka_ismi[20];
	
	char en_dusuk_fiyat[20];
	
	char en_yuksek_fiyat[20];
	
	char ram[20];

	char ekran_boyutu[20];
	
	char panel_tipi[20];
	
	char islemci_markasi[20];
	
	char ssd[20];
	
	char ekran_karti[20];
	
	char urunun_amaci[20];
};


int main()
{
	struct pc karsilastirma[2];// iki pc karsilastirmak icin diziyi 2 boyutlu yaptim
	
	int i;
	
	for (i=1; i <=2; i++)
	{
		printf("%d. pc'nin markasini giriniz : ",i);
		scanf("%s",&karsilastirma[i].marka_ismi);
		
		printf("\nen dusuk fiyati giriniz : ");
		scanf("%s",karsilastirma[i].en_dusuk_fiyat);
		
		printf("\nen yuksek fiyati giriniz : ");
		scanf("%s",karsilastirma[i].en_yuksek_fiyat);
		
		printf("\nrami giriniz : ");
		scanf("%s",karsilastirma[i].ram);
		
		printf("\nekran boyutunu giriniz : ");
		scanf("%s",karsilastirma[i].ekran_boyutu);
		
		printf("\npanel tipini giriniz : ");
		scanf("%s",karsilastirma[i].panel_tipi);
		
		printf("\nislemci markasini giriniz : ");
		scanf("%s",karsilastirma[i].islemci_markasi);
		
		printf("\nssd kapasitesini giriniz : ");
		scanf("%s",karsilastirma[i].ssd);
		
		printf("\nekran kartini giriniz : ");
		scanf("%s",karsilastirma[i].ekran_karti);
		
		printf("\nurunun amacini giriniz : ");
		scanf("%s",karsilastirma[i].urunun_amaci);
		
		printf("\n\n");
	}
	
	
	printf("\n\n\n\t\t-----KARSILASTIRMA-----\n\n\n");
	
	system("cls");
	
	for (i=1; i <= 2; i++)
	{
		printf("%s\t %s\t",karsilastirma[i].marka_ismi,karsilastirma[i].en_dusuk_fiyat);
		
		printf("%s\t %s\t",karsilastirma[i].en_yuksek_fiyat,karsilastirma[i].ram);
		
		printf("%s\t %s\t",karsilastirma[i].ekran_boyutu,karsilastirma[i].panel_tipi);
		
		printf("%s\t %s\t",karsilastirma[i].islemci_markasi,karsilastirma[i].ssd);
		
		printf("%s\t %s\n\n\n\n",karsilastirma[i].ekran_karti,karsilastirma[i].urunun_amaci);
	}

	return 0;
	
}
