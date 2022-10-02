// STRLWR FONKSÝYONU
/* string.h dahil edilir
bu fonksiyon karakter dizisinde buyuk harfleri kucuk harfe cevirir.
stcmp fonksiyonunda baskent ornegi vardi simdi burada tekrar yapalim..

lwr= lower'dan gelmekte asagi, kucuk anlami yani
*/

#include <stdio.h>
#include <string.h>

int main()
{
	/*
	char isim[10];
	
	printf("Buyuk harfler ileisminizi giriniz...\n");
	scanf("%s",isim);
	
	printf("Kucuk harler ile yazilmis hali: %s", strlwr(isim));
	
	*/
	
	char soru[]="ankara",cevap[15];
	
	printf("Turkiye'nin baskenti neresidir?\n");
	
	scanf("%s",cevap);
	
	strlwr(cevap);
//kullanici buyuk harfle ankara yazsa bile bu fonk. sayesinde kosulumuzu saglamis olacaktir.
	
	if(strcmp(soru,cevap)==0)
	{
		printf("Dogru cevap verdiniz.");
	}
	
	else 
	{
		printf("Yanlis cevap verdiniz.\a");
	}
	
	return 0;
}
 
