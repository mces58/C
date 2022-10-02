// STRUCT'LARDA POINTER

#include <stdio.h>
#include <string.h>

struct futbol
{
	char oyucu_adi[20];
	
	char takim[20];
	
	int yas;
	
	double pazar_degeri;
};

int main()
{
	struct futbol f;
	
	strcpy(f.oyucu_adi,"ronaldo");
	
	strcpy(f.takim,"juventus");
	
	f.yas = 39;	
	
	f.pazar_degeri = 85.000000;
	
	printf("oyuncu adi: %s\ntakimi: %s\nyasi: %d\npazar degeri: %lf",f.oyucu_adi,f.takim,f.yas,f.pazar_degeri);
	
	/* buraya kadar normal struct yapisini kullandik.*/ 
	
	printf("\n\n\n");
	
	struct futbol *ptr_f;
	
	ptr_f = &f;
	
	printf("oyuncu adi: %s\ntakimi: %s\nyasi: %d\n",ptr_f->oyucu_adi,ptr_f->takim,ptr_f->yas);
	
	printf("pazar degeri: %lf",ptr_f->pazar_degeri);
	
	// burada ise yeni bir operator karsimiza cikiyor " -> " bu operator . yerine kullaniliyor pointerlarda

	return 0;
}
