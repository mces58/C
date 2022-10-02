//DO-WHILE ORNEK

#include <stdio.h>

int main()
{
	int sayi, basamak_sayisi, toplam = 0;
	
	printf("bir sayi girin.\n");
	scanf("%d", &sayi);
	
	int sayinin_ilkhali = sayi;
	
	do
	{
		toplam += sayi % 10;
		basamak_sayisi++;
		
		sayi = sayi / 10;		
	}
	
	while (sayi > 0);
	
	printf("%d sayisi %d basamaklidir ve basamaklar toplami: %d\n", sayinin_ilkhali, basamak_sayisi, toplam);
	
	return 0;
}
