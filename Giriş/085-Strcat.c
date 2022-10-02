// STRCAT FONKSIYONU
/*string.h dahil edilir. 
iki paramatreden ikincisini birinciye ekleyen fonksiyondur

cat= congregate oradan geliyor olabilir emin degilim  anlami birlestirmek ,bir araya getirmek
*/

#include <stdio.h>
#include <string.h>

int main()
{
	/*
	char mesaj1[]="Merhaba ", mesaj2[]="can ";
	
	strcat(mesaj1,mesaj2);
	
	printf("%s",mesaj1); // printf("%s", srtcat(mesaj1,mesaj2));
	
	*/
	
	char isim[20], isim_kopya[20],mesaj[]="Merhaba ";
	int uzunluk;
	
	printf("Isminizi giriniz...\n");
	
	scanf("%s",isim);
	
	strcpy(isim_kopya,isim);
	
	uzunluk= strlen(isim_kopya);
	
	strcat(mesaj,isim_kopya);
	
	printf("%s isminizin uzunlugu: %d",mesaj,uzunluk);
	
	/*
	kullanicidan isim aldik bunu kopyaladik, uzunlugunu bulduk ve en son ekrana bastirdik
	*/
	
	return 0;
}
