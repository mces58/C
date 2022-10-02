// KARAKTER DIZILERI

#include <stdio.h>

int main()
{
	/*
	
	char isim[20]; // burada boyut belirtmez isek calismaz.Ya boyut belirtecektik ya da deger veya karakter atayacaktik.
	
	printf("Isiminizi giriniz...\n");
	
	scanf("%s", isim);// normalde & kullaniyorduk lakin stringlerde & kullanmiyoruz!!!.Ve boyutu belirttikten sonra isim[20] yazmiyoruz daha.
	
	printf("Isminiz: %s", isim);
	
	*/
		
	/*
	char isim[20];
	
	printf("Ad ve soyadinizi giriniz...\n");
	
	scanf("%s", isim);		
	burada konsola adi girip bosluk birakip soyadi girersek ekrana sadece adimiz yazilir. scanf bosluk yapilan yere kadar algilar 
	bunu duzeltmek icin iki tane ayri ayri char tanimla 
								
	printf("Your full name: %s\n", isim);
	*/	

	
	char ad[10], soyad[10];
	
	printf("Adinizi ve soyadinizi giriniz.\n");
	
	scanf("%s%s", ad, soyad); //burada adimizi ve soyadimizi ayri ayri aldik yukaridakinden farkli olarak
	
	printf("Adiniz ve soyadiniz: %s %s\n", ad, soyad);

	return 0;
}
