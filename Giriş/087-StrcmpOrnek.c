#include <stdio.h>
#include <string.h>

int main()
{
	//char veri tipinde sayida kullanabiliriz.cift tirnagin icinde oldugu surece
	char kullanici[]="mc_es58", sifre[]="12345";
	
	char girilen_ad[20], girilen_sifre[20];	
	
	printf("Steam'e hosgeldiniz.\n\nKullanici adinizi giriniz.\n");
	
	scanf("%s",girilen_ad);
	
	printf("\nSifrenizi giriniz.\n");
	
	scanf("%s",girilen_sifre);
	
	if(strcmp(kullanici,girilen_ad)==0 && strcmp(sifre,girilen_sifre)==0)
	{
		printf("\nSeni yeniden aramizda gormek muthis %s!",girilen_ad);
	}
	
	else
	{
		printf("\nHatali giris! Kullanici adi veya sifre yanlis\a");
	}
	
	return 0;
}
