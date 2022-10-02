#include <stdio.h>

float pozitif_eleman_ort(int dizi[] , int n)
{
	int i , toplam = 0 , sayac = 0; 
	
	float ort = 0;
	
	printf("\nDizinin elemanlarini giriniz:\n");
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",&dizi[i]);
		
		if(dizi[i] > 0)
		{
			sayac++;
			
			toplam += dizi[i]; 
		}
	}
	
	return ort = (float)toplam / sayac;
}

int main()
{
	system("color ed");
	
	int n;
	
	float sonuc = 0;
	
	printf("Dizinin boyutunu giriniz: ");
	
	scanf("%d",&n);
	
	int sayilar[n];
	
	sonuc = pozitif_eleman_ort(sayilar ,n);
	
	printf("\nOrtalama : %.2f",sonuc);
	
	return 0;
}
