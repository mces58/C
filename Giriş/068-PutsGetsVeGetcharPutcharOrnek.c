// PUTS - GETS VE PUTCHAR - GETCHAR ORNEK

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
	char a, dizi[30], c;
	
	int i, k = 0;

	puts("30 karakterlik bir ifade giriniz..\n");
	
	gets(dizi);
	
	puts("Aranacak karakteri giriniz.\n");
	
	c = getchar();
	
	for (i = 0; i < 30; i++)
		if (c == dizi[i])	k++;
		
	
	if (k == 0)
		printf("%c karakter dizide bulunamadi.\n", c);
	
	
	else 
		printf("%c karakteri dizide %d kere bulundu.\n", c, k);

	getchar();
		
}

