//GIRILEN SAYININ TEK MI CIFT MI OLDUGUNA KARAR VERME
#include <stdio.h>

int main()
{
	int sayi;
	
	printf("bir sayi giriniz.\n");
	scanf("%d", &sayi);
	
	if (sayi % 2 == 0)
	printf("cift sayi\n\a");	
	
	else 
	{
		printf("tek sayi\n");
	}

	return 0;
}

