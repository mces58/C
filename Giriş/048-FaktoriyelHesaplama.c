// FAKTORIYEL HESAPLAMA

#include <stdio.h>

int main()
{
	
	int sayi;
	
	int fakt = 1;
	
	printf("sayi girin.\n");
	scanf("%d", &sayi);
	
	while (sayi > 0)
	{
		fakt *= sayi;
		sayi--;
	}
		printf("sonuc: %d\n",fakt);
	
	return 0;
}
