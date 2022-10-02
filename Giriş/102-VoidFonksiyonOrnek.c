//VOID ORNEK DERS ORTALAMASI HESAPLAMA

#include <stdio.h>
#include <stdlib.h>

void not_hesapla(float vize, float final)
{
	float ort;
	
	ort= vize * 0.40 + final * 0.60;
	
	
	if(ort>90 && ort<=100)
	
	printf("Ortalama: %.3f - 'AA'",ort);
	
	else if(ort>70 && ort<=90)
	
	printf("Ortalama: %.3f - 'BB'",ort);
	
	else if(ort>50 && ort<=70)
	
	printf("Ortalama: %.3f - 'CC'",ort);
	
	else if(ort>30 && ort<=50)
	
	printf("Ortalama: %.3f - 'DD'",ort);

	else

	printf("Ortalama: %.3f - 'EE'",ort);
	
}

int main()
{
	float vize, final;
	
	printf("Vize notunuzu ve final notunuzu giriniz.\n");
	
	scanf("%f %f",&vize,&final);
	
	if(vize<0 || vize>100)
	
	printf("Gecerli not giriniz.\n\a");
	
	else if(final<0 || final>100)
	
	printf("Gecerli not giriniz.\n\a");
	
	else
	
	not_hesapla( vize, final);

	return 0;
}
