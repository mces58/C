//STRCMP FONKSIYONU 
/* 
string.h dahil edilir.
strcmp fonk. iki stringi karsilastirir.

strcmp(string1,string2)==0 bu ifade string1 ile string2'nin birbirine esit oldugunu soyler 

strcmp(string1,string2)<0 bu ifade string1'in string2'den alfabetik olarak once geldigini soyler

strcmp(string1,string2)>0 bu ifade string1'in string2'den alfabetik olarak sonra geldigini soyler

cmp=comparison'dan gelmete anlami karsilastirma

*/

#include <stdio.h>
#include <string.h>

int main()
{
	char soru[]="Ankara", cevap[10];
	
	printf("Turkiye'nin baskenti neresidir?\n");
	
	scanf("%s",cevap);
	
	if(strcmp(soru,cevap)==0)
	{
		printf("%s cevabi dogrudur.",cevap);
	}
	
	else
	{
		printf("%s cevabi yanlistir.Dogru cevap %s'dir.", cevap, soru);
	}
	// cevap kucuk a ile baslasa bile yanlis sayar.Birebir esit olmalari lazim
}
