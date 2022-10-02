// SINUS ,COSINUS ,TANJANT ,KOTANJANT

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main ()
{
	float radyan,derece, sonuc_sin, sonuc_cos, sonuc_tan, sonuc_cot;
	
	printf("Dereceyi giriniz...\n");
	
	scanf("%f",&radyan);
	
	derece= (PI / 180)* radyan;// kullanicidan alinan degeri radyan olarak tanimladim sonra onu dereceye cevirdim
	
	//dereceye cevirme islemini yapmaz isek sonuclari radyan cinsinden buluyor. 
	
	sonuc_sin= sin(derece);
	
	printf("sin(%.2lf): %.2lf\n",radyan, sonuc_sin);


	sonuc_cos= cos(derece);
	
	printf("cos(%.2lf): %.2lf\n", radyan, sonuc_cos);
	
	
	sonuc_tan= tan(derece);
	
	if (radyan== 90 || radyan==270)
	{
		printf("tan(%.2lf): Tanimsiz\n",radyan);
	}
	else
	{
		printf("tan(%.2lf): %.2lf\n",radyan, sonuc_tan);	
	}
	
	sonuc_cot= cos(derece)/sin(derece);// cot tanimli olmadigi icin cos/sin'den yaptik.
	
	if(radyan ==0 || radyan ==180)
	{
		printf("cot(%.2lf): Tanimsiz\n",radyan);

	}

	else if(radyan== 360)
	{
		printf("cot(%.2lf): Tanimsiz\n",radyan);
	}

	else
	{
		printf("cot(%.2lf): %.2lf\n",radyan, sonuc_cot);
	}
	
	return 0;
} 
