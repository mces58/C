// IC ICE STRUCTLAR

#include <stdio.h>
#include <string.h>


struct adres
{
	char mahalle_adi[20];
	
	char cadde_adi[20];
	
	char sokak_adi[20];
	
	
}adres1;


struct ogrenci
{
	char ad[20];
	
	char soyad[20];
	
	int ogrenci_no;
	
	int ogrenci_yasi;
	
	struct adres adres1;
	
}ogrenci1;


int main()
{
	
	strcpy(ogrenci1.ad,"mehmetcan");
	
	strcpy(ogrenci1.soyad,"eser");
	
	ogrenci1.ogrenci_no = 1915;
	
	ogrenci1.ogrenci_yasi = 19;
	
	strcpy(ogrenci1.adres1.mahalle_adi,"kizilirmak mahallesi");
	
	strcpy(ogrenci1.adres1.cadde_adi,"5. cadde");
	
	strcpy(ogrenci1.adres1.sokak_adi,"erkanlar sokak");
	
	printf("%s\n%s\n%d\n%d\n",ogrenci1.ad,ogrenci1.soyad,ogrenci1.ogrenci_no,ogrenci1.ogrenci_yasi);
	
	printf("%s\n%s\n%s",ogrenci1.adres1.mahalle_adi,ogrenci1.adres1.cadde_adi,ogrenci1.adres1.sokak_adi);
	
	return 0;
}
