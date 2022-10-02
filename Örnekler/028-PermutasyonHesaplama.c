#include <stdio.h>


float fak_hesapla(int sayi)
{
	if(sayi == 1)
	{
		return 1;
	}
	
	return sayi * fak_hesapla(sayi-1);
	
}

int main()
{
	system("color 4f");
	
	int n,r;
	
	printf("\t*****Permutasyon Hesaplama*****\n\n");
	
	printf("Formulu: n! / (n-r)!\n\n");
	
	printf("n sayisini giriniz: ");
	
	tekrar1:
	
	scanf("%d",&n);
	
	if(n <= 0)
	{
		printf("\nTekrar giriniz: ");
		
		goto tekrar1;
	}
	
	printf("\nr sayisini giriniz: ");
	
	tekrar2:
	
	scanf("%d",&r);
	
	if(r <1 || r > n)
	{
		printf("\nTekrar giriniz: ");
		
		goto tekrar2;
	}
	float per_hesapla;
	
	per_hesapla = fak_hesapla(n)/fak_hesapla(n-r);
	
	printf("\nSonuc : %.2f\n",per_hesapla);
	
	getch();
}
