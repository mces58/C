//CARPIM TABLOSU
#include <stdio.h>

int main()
{
	int sayi1, sayi2, sonuc;
		
	for (sayi1 = 1; sayi1 < 11; sayi1++)
	{
		for (sayi2 = 1; sayi2 < 11; sayi2++)
		{
			sonuc = sayi1 * sayi2;

			printf("%d x %d= %d\t", sayi2, sayi1, sonuc);
			
		}
		printf("\n");
	}
	getch();
}
