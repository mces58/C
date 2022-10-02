#include <stdio.h>

struct ogrenci
{
	char ad[20];
	
	char soyad[20];
	
	int no;
};


void bilgi_goster(struct ogrenci x)
{

	printf("\nad: %s\nsoyad: %s\nno: %d",x.ad, x.soyad, x.no);
	
	
}

struct ogrenci deger_al() // struct tipinde fonksiyon olusturduk
{
	struct ogrenci yeni;
	
	printf("Bilgileri giriniz..\n");
	
	scanf("%s%s%d",&yeni.ad, &yeni.soyad, &yeni.no);
	
	return yeni;
}

int main()
{
			
	struct ogrenci ogr1 ;
	
	ogr1 = deger_al();
	
	bilgi_goster(ogr1);


	return 0;
}
