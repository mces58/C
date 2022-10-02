//GIRILEN SAYININ 2 VE 3 GORE BOLUNEBILMESINI YAZDIRAN PROGRAM

#include <stdio.h>

int main()
{
	int sayi;
	
	printf("bir sayi giriniz.\n");
	scanf("%d", &sayi);
	
	if (sayi % 2 == 0 && sayi % 3 == 0 )
	{
		printf("sayiniz ikiye ve uce tam bolunur.\n\a");
	}
	
	else if (sayi % 2 == 0)
	{
		printf("ikiye tam bolunur.\n");
	}
	else if (sayi % 3 == 0)
	{
		printf("sayiniz uce tam bolunur.\n");
	}
	
	else
	{
		printf("sayiniz iki ve uce tam bolunemez.\n");
	}
	
	return 0;
}

