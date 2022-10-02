#include <stdio.h>

int main()
{
	int a, b;
	
	printf("a sayisini giriniz: ");
	scanf("%d" ,&a);
	
	printf("b sayisini giriniz: ");
	scanf("%d", &b);
	
	printf("\ntoplam= %d \n\n", a + b);
	printf("cikarma= %d \n\n", a - b);
	printf("carpim= %d \n\n", a * b);
	printf("bolum= %d \n\n", a / 5);
	printf("kalan= %d \n\n", (a + b) % 5);
	printf("artir= %d \n\n", ++a);
	printf("eksilt= %d \n\n", --b);
	
	}
/*kullanicidan alinan degerlerle aritmetik islemler yapma*/
