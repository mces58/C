//GIRILEN CIFT SAYILARIN TOPLAMINI BULAN PROGRAM

#include <stdio.h>

int main()
{
	int sayi = 0;
	int toplam = 0;
	
	while (sayi % 2 == 0)
	{
		toplam +=sayi;

		printf("Bir sayi giriniz:");
    	scanf("%d", &sayi);

	}

	printf("Dongu sona erdi.\n");
	
	printf("Toplam: %d", toplam);

	return 0;
}
