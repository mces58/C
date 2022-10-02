// STRUPR FONKSIYONU
/*string.h dahil edilir.
bu fonksiyon ise dizideki kucuk harfler ile girilmisleri buyuk harfli haline cevirir.

strlwr fonk. tersi

upr= upper'dan geliyor ust yukari anlami yani

*/

#include <stdio.h>
#include <string.h>

int main()
{
	char isim[15];
	
	printf("Kucuk harfler ile isminizi giriniz...\n");
	
	scanf("%s",isim);
	
	printf("Isminizin buyuk harfler ile yazilisi: %s",strupr(isim));
	
	return 0;
}
