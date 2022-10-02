#include <stdio.h>

void en_kucuk_eleman(int dizi[] , int n)
{
	int i , *p,en_kucuk;
	
	printf("\nDizinin elemanlarini giriniz:\n");
	
	for(i = 0; i < n; i++)
	{
		printf("\n%d . eleman: ", i+1);
		
		scanf("%d", &dizi[i]);
		
	}
	
	en_kucuk = dizi[0];
	
	
	for(i=0; i < n; i++)
	{
		if(en_kucuk > dizi[i])
		{
			en_kucuk = dizi[i];
			
		}
		
	}
	
	p = &en_kucuk;
	
	printf("\nEn kucuk eleman : %d", *p);
	
	printf("\nEn kucuk elemanin adresi : %p", p);
}


int main()
{
	system("color b9");
	
	int n;
	
	printf("Dizinin boyutunu giriniz: ");
	
	secim:
	
	scanf("%d",&n);
	
	if(n <= 0)
	{
		printf("Tekar giriniz:");
		
		goto secim;
	}
	
	int sayilar[n];
	
	en_kucuk_eleman(sayilar , n);
	
	return 0;
}
