// FONKSIYONLARDA TEK BOYUTLU DIZILER

/* donus_tipi fonksiyon_adi (tip dizi[] , tip boyut)
{
	islemler
}

seklinde basit bir kalibi vardir.
*/

/*
#include <stdio.h>
#define p printf

int sayi_dizisi(int sayi[],int boyut)
{
	
	int i=0,carp=1;
	
	for (; i < boyut; i++)
	{
		carp *= sayi[i];
	}
	
	return carp;
}


int main()
{
	int sayilar[]= {1,2,3,4,5};
	
	p("Carpim sonucu: %d",sayi_dizisi(sayilar,5));// burada ki 5 dizinin boyutu gostermektedir.
	
	return 0;
}
*/

#include <stdio.h>
#define p printf
#define s scanf

int sayi_toplam(int sayi[], int boyut)
{
	int i = 0,toplam = 0;	
	
	for(; i < boyut; i++)
	{
		toplam += sayi[i];
	}
	
	return toplam;
}

int main()
{
	int bes_sayi[5], i=0;
	
	p("5 tane sayi giriniz...\n");
	
	for(; i< 5; i++)
	{
		p("%d. sayi: ",i+1);
		s("%d", &bes_sayi[i]);
	}
		
	p("Girilen sayilarin toplami: %d",sayi_toplam(bes_sayi,5));
	
	return 0;
}
