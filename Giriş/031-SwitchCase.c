//SWITCH -CASE KONU ANLATIMI

/* 
switch-case de bir nevi if-else ne ise yariyorsa o ise yarar.
birden fazlaki durumlarda ise yarar.
Yapisi 

switch(degisken)
{
 case durum 1 : gerekli islemler ;
 break;

 case durum 2 : gerekli islemler ;
 break;
   .
   .
   .
 case durum N : gerekli islemler ;
 break;
 
 default programdan cikis : gerekli islemler ;
 break;

*/
// ORNEK

#include <stdio.h>
#include <math.h>

int main()
{
	int secim;
	float sayi1, sayi2, sonuc;
	
	printf("lutfen bir secim yapiniz.\n");
	printf("1- Toplama\n");
	printf("2- Cikarma\n");
	printf("3- Carpma\n");
	printf("4- Bolme\n");
	printf("5- Kok alma\n");
	printf("6- Kare alma\n");
	
	scanf("%d", &secim);
	
	switch (secim)
	{
		case 1 :
		printf("iki sayi giriniz.\n");
		scanf("%f %f", &sayi1, &sayi2);
		
		sonuc = sayi1 + sayi2;
		printf("toplam: %.3f\n", sonuc);
		break;
		
		case 2:
		printf("iki sayi giriniz.\n");
		scanf("%f %f", &sayi1, &sayi2);
	
		sonuc = sayi1 - sayi2;
		printf("fark: %.3f\n", sonuc);
		break;
		
		case 3:
		printf("iki sayi giriniz.\n");
		scanf("%f %f", &sayi1, &sayi2);
		
		sonuc = sayi1 * sayi2;
		printf("carpim: %.3f\n", sonuc);
		break;
		
		case 4:
		printf("iki sayi giriniz.\n");
		scanf("%f %f", &sayi1, &sayi2);
		
		sonuc = sayi1 / sayi2;
		printf("bolum: %.3f\n", sonuc);
		break;
		
		case 5:
		printf("bir sayi giriniz.\n");
		scanf("%f", &sayi1);
		
		if (sayi1 < 0)
		{
			printf("Hatali giris\n\a");
		}
		else
		{
		sonuc = sqrt(sayi1);
		printf("kok alma: %.3f\n", sonuc);
		} 
		break;
		
		case 6:
		printf("bir sayi giriniz.\n");
		scanf("%f", &sayi1);
		
		sonuc = pow(sayi1,2);
		printf("karesi: %.3f\n", sonuc);
		break;
		
		default :
		printf("hatali giris\n\a");
		
	}

	return 0;
}
 
