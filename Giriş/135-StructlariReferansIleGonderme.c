#include <stdio.h>
#include <string.h>

struct ogrenci
{
	char ad[20], soyad[20];
	
	int numara;
};


struct ogrenci *deger_al(struct ogrenci *p)
{
	strcpy(p->ad,"Ajda");
	
	strcpy(p->soyad,"Pekka");
	
	p->numara = 99;
	
	return p;
}


void goster(struct ogrenci *p)
{
	printf("Ogrenci Bilgileri\n\nAdi : %s\nSoyadi : %s\nNumarasi : %d", p->ad, p->soyad, p->numara);

}


void deger_al2(struct ogrenci *p)
{
	strcpy(p->ad,"Leyla");
	
	strcpy(p->soyad,"Mecnun");
	
	p->numara = 51;
	
	printf("\n\nAdi : %s\nSoyadi : %s\nNumarasi : %d",p->ad,p->soyad,p->numara);
}

int main()
{	
	struct ogrenci ogr1 = {"Mehmetcan", "Eser", 784};
	
	struct ogrenci *ogr2;
	
	struct ogrenci ogr3;
	
	goster(&ogr1);
	
	ogr2 = deger_al(&ogr1);
	
	printf("\n\nAdi : %s\nSoyadi : %s\nNumarasi : %d", ogr2->ad, ogr2->soyad, ogr2->numara);
	
	
	deger_al2(&ogr3);
	
	
	return 0;
}
