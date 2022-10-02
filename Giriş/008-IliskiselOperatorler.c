#include <stdio.h>

int main()
{
	int x = 10;
	int y = 9;
	int sonuc;
	
	sonuc = (x > y);
	printf("1) x > y = %d \n", sonuc);
	
	sonuc = (x < y);
	printf ("2) x < y = %d \n", sonuc);
	
	sonuc  = (x < y + 2); //burada y'ye 2 ekledik
	printf("3) x < y = %d \n", sonuc);
	
	sonuc = (x <= ++y); //++ y'nin onunde cevap 1
	printf("4) x <= y = %d \n", sonuc);
	
	sonuc = (x <= y++); // ++ y'nin arkasinda cevap 1 cunku isleme girmedikleri icin
	printf("5) x < y = %d \n", sonuc);
	
	sonuc = (x < ++y * 2); //y++ icinde cevap 1
	printf("6) x < y = %d \n", sonuc);
	
	sonuc = (x == y);
	printf("7) x == y = %d \n", sonuc);
}
/*burada karsilastirma yaptik sonuclar dogru ise 1 yanlis ise 0 seklinde oluyor mantiktaki*/
