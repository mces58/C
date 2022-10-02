#include <stdio.h>
#include <stdbool.h>// for'un icinde true'nun calismasi icin

int main()
{
	int sayi, i, toplam;
	
	for (i = 0; true;)
	{
		printf("sayi giriniz.Cikis = -1\n\n",sayi);
		scanf("%d", &sayi);
		
		if(sayi == -1)
		{
			break; // for'u bitirmeye yarar.
		}
		
		toplam += sayi;
		printf("toplam : %d\n\n", toplam);
	}

	return 0;
}
