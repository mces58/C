// puts() - gets() ve getchar() - putchar() KONU ANLATIMI

/* 
Bu komutlar stringler ve karakter uzerinde islem yapmak icin kullanilir ve bunlari kullanmak icin <string.h> kutuphanesini eklemek gerekir

putchar ve getchar tek karakter uzerinde islem yapmak icin kullanilir

puts ve gets coklu karakter(dizi) uzerinde islem yapmak icin kullanilir

puts ve putchar ekrana ciktiyi bastirir yani printf'in gorevini yapar

gets ve getchar kullanicidan bilgi almak icin kullanilir yani scanf'in gorevini yapar

gets sayi tutmaz karakter tutar

*/

#include <stdio.h>

int main()
{
	
	char  dizi[30];
	
	/*
	puts("Say something...\n");
	
	gets("%s");
	
	 boyle  kullanilabilir.Ama pek ise yaramiyor.Alinan iafdeyi tekrar ekrana bastiramiyorum asagida ki biraz daha kullanisli */
	
	printf("Say something...\n\n");
	
	gets(dizi);
	
	printf("\n\n");
	
	puts(dizi);
	
	return 0;
}
 
