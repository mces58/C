// POW FONKSIYONU
/*
math.h dahil edilir.

bu fonksiyon kuvvet almada kullanilir.

pow= power'dan gelmekte anlami kuvvet 

*/

#include <stdio.h>
#include <math.h>

int main()
{
	float a,b;
	
	double sonuc;
	
	printf("Kuvveti alinacak sayinin tabanini giriniz: ");
	
	scanf("%f",&a);
	
	printf("\nKacinci kuvvetten almak istiyorsaniz onu giriniz: ");
	
	scanf("%f",&b);
	
	sonuc= pow(a,b);
	
	printf("\nSonuc: %.3lf",sonuc);
	
	return 0;
}
