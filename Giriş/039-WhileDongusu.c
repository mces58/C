#include <stdio.h>

int main()
{
	int x =1;
	int sayi = 0;
	int toplam = 0;
	
	printf("1'den n'e kadar olan sayilarin toplami.\nn degeri giriniz.\n");
	scanf("%d", &sayi);
	
	int kullanicidan_alinan_sayi = sayi;
	
	while(sayi > 0)
	{
		printf("%d\n",x);

		toplam += x;
		
		x++;
		sayi--;
		
	}
	
	printf("1'den %d kadar olan sayilarin toplami: %d\n",kullanicidan_alinan_sayi, toplam);
	
	return 0;
}
