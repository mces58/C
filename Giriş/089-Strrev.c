// STRREV FONKSIYONU 
/* string.h dahil edilir.
diziyi tersten yazmaya yarar.
onceden strlen ile dizinin uzunlugunu buluyorduk ve for dongusu ile tersini ekrana bastiriyorduk
simdi bunlarin hicbirine gerek yok strrev direk tersini yaziyor.

rev= reverse'den geliyor yani ters anlaminda
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char isim[10];
	
	printf("Isminizi giriniz...\n");
	
	scanf("%s",isim);// gets(isim);
	
	printf("%s", strrev(isim));
	
	return 0;
}
