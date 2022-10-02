#include <stdio.h>

int main()
{
	FILE *dosya;
	

	dosya = fopen("ogrenci.txt","w");
	
	char ad_soyad[30];
	
	char bolum[20];
	
	int okul_no;
	
	printf("Adinizi ve soyadinizi giriniz: ");
	
	gets(ad_soyad);
	
	printf("Okudugunuz bolumu giriniz: ");
	
	gets(bolum);
	
	printf("Okul numaranizi giriniz: ");
	
	scanf("%d",&okul_no); // burada gets kullanmadik cunku gets bellekte sayiyi tutmaz karakter tutar
	
	
	fprintf(dosya,"Adiniz vesoyadiniz: %s\nBolumunuz: %s\nOkul numaraniz: %d\n",ad_soyad,bolum,okul_no);
	
	
	
	/* 
	ilk calistiginda girilen bilgiler sunlar olsun 
	
	ad soyad : can eser
	bolum : bilgisayar muh.
	okul no : 123
	
	dosyaya baktigimizda bu bilgileri oraya basar
	
	tekrar kodu calistirdimiz da
	
	yeniden bilgileri girelim 
	
	ad soyad : ali keser
	bolum : isletme
	okul no : 789
	
	olsun dosyaya baktigimiz da bu bilgilerde basilmis olur lakin ilk basilan bilgiler kaybolmus olur 
	bunu onlemek icin dosyanin modunu "w" degilde "a" yapilmalidir.
	
	*/
	
	fclose(dosya);
	
	return 0;
}
