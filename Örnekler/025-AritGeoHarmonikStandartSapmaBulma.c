// N elemanlý dizinin aritmatik , standart sapmasý , harmonik ortalama ve geometrik ortalama hesaplama

#include <stdio.h>
#include <math.h>

float aritmetik();

double standart();

double geometrik();

double harmonik();

int main()
{
	system("color 1d");
	int n, i;
	
	float art,stdio,geo,har;
	
	printf("Dizinin boyutunu giriniz: ");
	
	tekrar:
	
	scanf("%d",&n);
	
	if(n <= 1)
	{
		printf("\nTekrar boyutu giriniz: ");
		
		goto tekrar;
	}
	
	float sayilar[n];
	
	printf("\nDizinin elemanlarini giriniz:\n");
	
	for(i=0; i < n; i++)
	{
		printf("%d . eleman: ",i+1);
		
		scanf("%f",&sayilar[i]);
	}
	
	art = aritmetik(sayilar,n);
	
	stdio = standart(sayilar,n);
	
	geo = geometrik(sayilar,n);
	
	har = harmonik(sayilar,n);
	
	printf("\nAritmatik ortalamasi: %.2f\nStandart sapmasi: %.2f\n",art,stdio);
	
	printf("Geometrik ortalamasi: %.2f\nHarmonik ortalamasi: %.2f",geo,har);
	
	getch();
}

float aritmetik(float dizi[], int size)
{
	
	int i;
	
	float toplam , ort;
	
	for(i = 0; i < size; i++)
	{
		toplam += dizi[i];
	}
	
	return ort = toplam / size; 
}

double standart(float dizi[], int size)
{
	float ara_islem[size], toplam = 0, arit_ort = aritmetik(dizi , size);
	
	int i;
	
	for(i= 0; i < size; i++)
	{
		ara_islem[i] = dizi[i] - arit_ort;
	}
	
	for(i = 0; i < size; i++)
	{
		ara_islem[i] *= ara_islem[i];
	}
	
	
	for(i= 0; i < size; i++)
	{
		toplam += ara_islem[i];
	}
	
	toplam = toplam / (size - 1);
	
	return sqrt(toplam);
}


double geometrik(float dizi[], int size)
{
	int i;
	
	float carpim = 1;
	
	for(i=0; i < size; i++)
	{
		carpim *= dizi[i];
	} 
	
	return pow(carpim , (1/(float)size));
}

double harmonik(float dizi[], int size)
{
	int i;
	float har_ort = 0;
	
	for(i=0; i <size; i++)
	{
		har_ort += (1 / dizi[i]);
	}
	
	har_ort = size / har_ort;

	return har_ort;
	
/*
	harmonik ort hesaplama:
	
.	     n (eleman sayisi)
.	--------------------------
.    1/x1 + 1/x2 + 1/x3 + ...1/xn

*/    
}



