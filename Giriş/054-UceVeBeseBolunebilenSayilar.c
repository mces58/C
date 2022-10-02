//3 VE 5'E TAM BOLUNEBILEN SAYILARI BULMA
#include <stdio.h>

int main()
{
	int sayi;
	int i;
	
	printf("bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	if (sayi > 0)
	{
		
		for (i =1; i < sayi; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("%d\n",i);
			}
		}
	}

	else 
	{
		printf("Pozitif sayi giriniz\n\a");
	}
	
	return 0;
}
