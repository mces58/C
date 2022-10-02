// Dikdortgenin Alanini,Cevresini ve Hacmini Hesaplama:



#include <stdio.h>

int main()
{
	
	float sayi1, sayi2, alan, cevre;
	
	printf("Lutfen iki tane sayi giriniz:\n");
	scanf("%f %f", &sayi1, &sayi2);
	
	
	alan = sayi1 * sayi2;
	
	cevre = 2 * sayi1 + 2 * sayi2;
	
	printf("Dikdortgenin alani: %.2f\nDikdortgenin cevresi: %.2f\n\n", alan, cevre);
	
	{ 
	/* suslu parantez koyarak birinci bolumden ayirdim
	suslu parantez koymayacaksan degiskenleri fakli isimlerle 
	tanimlamalisin yoksa yukarida ki degiskenler ile karisiyor */
	
	float sayi1, sayi2, sayi3, hacim ;
	
	printf("Lutfen 3 tane sayi giriniz:\n");
	
	scanf("%f %f %f", &sayi1, &sayi2, &sayi3);
	
	hacim = sayi1 * sayi2 * sayi3 ;
	
	printf("Dikdortgenin hacmi: %.2f\n", hacim);
 	
	}
	
	return 0;
}

  
