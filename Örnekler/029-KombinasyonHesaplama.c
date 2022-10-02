#include <stdio.h>

float fak_hesaplama(int sayi)
{
	if(sayi == 1)
	{
		return 1;
	}
	
	return sayi * fak_hesaplama(sayi-1);
}


int main()
{
	system("color 4f");
	
	int n,r;
	
	printf("\t*****Kombinasyon Hesaplama*****\n\n");
	
	printf("Formulu: n! / r!(n-r)!\n\n");
	
	printf("n sayisini giriniz: ");
	
	tekrar1:
	
	scanf("%d",&n);
	
	if(n <=0)
	{
		printf("\nTekrar giriniz: ");
		
		goto tekrar1;
	}
	
	printf("\nr sayisini giriniz: ");
	
	tekrar2:
	
	scanf("%d",&r);
	
	if(r < 1 || r > n)
	{
		printf("\nTekrar giriniz: ");
		
		goto tekrar2;
	}
	
	float kom_hesapla;
	
	kom_hesapla = fak_hesaplama(n)/(fak_hesaplama(n-r)* fak_hesaplama(r));
	
	printf("%.2f",kom_hesapla);
	
	getch();
}
