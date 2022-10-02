#include <stdio.h>

int main()
{
	
	float dizi[5];
	float toplam = 0;
	
	float i = 0;
	
	printf("5 sayi giriniz\n\n");
	
	for (; i < 5; i++)
	{
		printf("%.0f. sayiyi giriniz.\n", i+1); 
		scanf("%f", &dizi[5]);
		
		toplam += dizi[5];
	}
	
	printf("\nGirilen sayilarin toplami: %.2f", toplam);
	
	return 0;
}
	
