// LOGARITMA FONKSIYONU
/*
math.h dahil edilir

log() bu ifade ln olarak hesapliyor,
log2() bu 2 tabaninda hesapliyor,
log10() 10 tabaninda hesapliyor ve boyle gidiyor iste.

kullanicidan taban alinip hesaplama nasil yapilir? Onu bilmiyorum.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	double sayi, sonuc;
	
	printf("Sayi giriniz...\n");
	
	scanf("%lf", &sayi);
	
	sonuc= log10(sayi);// 10 tabaninda hesaplama
	
	printf("Sonuc: %.3lf\n",sonuc);
	
	sonuc= log2(sayi);// 2 tabaninda 
	
	printf("Sonuc: %.3lf\n",sonuc);
	
	sonuc= log(sayi);// e tabaninda
	
	printf("Sonuc: %.3lf",sonuc);
	
	return 0;
}
