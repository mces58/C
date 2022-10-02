// N boyutlu a ve b vektorlerinin skaler carpimini hesaplama ve vek. arasinda ki aciyi bulma

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
	system("color 5a");
	
	int boyut;
	
	printf("Hangi boyutta ki vektorlerin skaler carpimini istiyorsunuz: ");
	
	tekrar:
	
	scanf("%d",&boyut);
	
	if(boyut <= 1)
	{
		printf("\nBoyutu tekrar giriniz: \a");
		
		goto tekrar;
	}
	if(boyut > 5)
	{
	printf("\n%d . boyutlukta ki ic carpimi kimse sormaz.\nBu yuzden 5 veya 5'ten kucuk giriniz: \a",boyut);
		
		goto tekrar;
	}
	
	float a_vektoru[boyut];
	
	float b_vektoru[boyut];
	
	int i;
	
	double toplam = 0;
	
	double a_birim_uzunluk;
	
	double b_birim_uzunluk;
	
	double a_kare_toplam;
	
	double b_kare_toplam;
	
	double radyan,derece;
	
	double carpim;
	
	printf("\nA vektorunu giriniz:\n");
	
	for(i=0; i < boyut; i++)
	{
		scanf("%f",&a_vektoru[i]);
	}
	
	printf("\nB vektorunu giriniz:\n");
	
	for(i=0; i < boyut; i++)
	{
		scanf("%f",&b_vektoru[i]);
	}
	
		
	for(i=0; i < boyut; i++)
	{
		toplam += a_vektoru[i] * b_vektoru[i];
	}
	
	printf("\nIc carpim sonucu: %.2f\n",toplam);
	
	if(toplam == 0)
	{
		printf("\nBu iki vektor birbirine diktir.\n");
	}
	
	else
	{
		printf("\nBu iki vektor birbirine dik degildir.\n");
		
		for(i=0; i < boyut; i++)
		{
			a_kare_toplam  += a_vektoru[i] * a_vektoru[i]; 
		}
		
		for(i=0; i < boyut; i++)
		{
			b_kare_toplam  += b_vektoru[i] * b_vektoru[i];
		}
		
		a_birim_uzunluk = sqrt(a_kare_toplam);
		
		b_birim_uzunluk = sqrt(b_kare_toplam);
		
		carpim = a_birim_uzunluk * b_birim_uzunluk;
		
		radyan = acosf(toplam/carpim);
		
		derece = (radyan * 180.0) / PI;
		
		printf("\nBu iki vektor arasinda ki aci ise: %.2f derecedir. ",derece);
	}
	getch();
}
/*
double acos(double arg);

float acosf(float arg); 

long double acosl(long double arg);
*/
