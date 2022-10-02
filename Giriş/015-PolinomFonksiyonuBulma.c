//POLINOMON FONKSIYONUN DEGERINI BULMA


#include <stdio.h>

int main()
{
	
	int a, b, c;
	
	float x, sonuc;
	
	printf("a, b, c ve x sayilarini giriniz:\n");
	
	scanf("%d %d %d %f", &a, &b, &c, &x);
	
	sonuc = (a * x * x) + (b * x) + c;
	
	printf("x'in polinomdaki degeri: %f\n", sonuc);
	
	return 0;
}

