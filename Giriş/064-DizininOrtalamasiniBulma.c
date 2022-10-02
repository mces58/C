#include <stdio.h>

int main()
{
	
	float dizi[5];
	float toplam = 0;
	int i = 0;
	
	printf("5 sayi giriniz...\n");
	
	for(; i < 5; i++)
	{
		printf("%d. sayiyi giriniz:\n", i + 1);
		scanf("%f", &dizi[i]);
		
		 toplam += dizi[i];
	}
		
	printf("Ortalamasi: %.3f\n", toplam / 5);
	
	return 0;
}
