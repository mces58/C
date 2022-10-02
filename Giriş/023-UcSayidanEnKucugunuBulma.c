//UC TAM SAYIYI OKUYAN VE BU UC TAM SAYININ EN KUCUGUNU BULAN PROGRAM
#include <stdio.h>

void main()
{
	int a, b, c;
	
	printf("Uc tamsayi giriniz.\n");
	scanf("%d %d %d", &a, &b, &c);
	
	
	if (a < b && a < c)
	{
		printf("En kucuk sayi: %d\n");
	}
	
	else if (b < a && b < c)
	{
		printf("En kucuk sayi: %d\n");
	}
	
	else if (c <a && c < b)
	{
		printf("en kucuk sayi: %d\n");
	}	
	
	else
	{
		printf("tum sayilar esittir.\n");
	}

	getch();
}
