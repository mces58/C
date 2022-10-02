// STRCPY FONKSIYONU

/* strcpy fonk. kopyalama islevi gormektedir.
string.h dahil edilir.

strcpy(parametre1,parametre2) burada parametre2'deki veriler parameetre1'e kopyalanir

cpy=copy'den gelmekte anlami koypalama
*/

#include <stdio.h>
#include <string.h>

int main()
{
	/*
	char isim[]="can",isim2[10];
	
	printf("Hello %s",strcpy(isim2,isim));
	
	// isim karakter dizisindeki ifadeyi isim2 karakter dizisine kopyalandi.
	
	*/
	
	
	/*illa da ayri ayri tanimlamalar yapmaya gerek yok.
	
	char isim[10];
	
	printf("Hello %s", strcpy(isim,"can"));
	
	yani printf'in icindeki strcpy'ye de ifadeyi yazip kopyalayabiliriz.
	
	*/
	
	char takim_adi[20], en_buyuk[20];
	int i;
	
	printf("Takim adi giriniz...\n");
	
	scanf("%s",takim_adi);
	
	
	for (i=0; i<strlen(takim_adi); i++)
	{
		printf("%2d En buyuk %s\n",i+1, strcpy(en_buyuk,takim_adi));
	}

/* bu ornekte kullanicidan alinan bir takim_adi ile takim_adi karakter dizisini en_buyuk karakter dizisine
kopyaladik ve strlen fonk. ile de girilen takimin karakter sayisi kadar ekrana bastirdik. */
	
	return 0;
}
