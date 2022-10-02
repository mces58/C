//GIRILEN SAYININ 4, 5 VE 6'DAN EN AZ BIRINE BOLUNEBILME DURUMUNU YAZDIRAN PROGRAM

#include <stdio.h>

void main()
{
	int sayi;
	
	printf("bir sayi giriniz.\n");
	scanf("%d", &sayi);
	
	if(sayi % 4 == 0 || sayi % 5 == 0 || sayi % 6 == 0)
		printf("sayi uygun.\n");
	
	else 
		printf("sayi uygun degil.\n");

	getch();
}

