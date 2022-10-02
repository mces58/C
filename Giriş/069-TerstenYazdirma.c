#include <stdio.h>

int main()
{
	char dizi[20];
	
	int i;
	 
	puts("Tersten yazilisini gormek istediginiz 20 karakter giriniz.\n");
	//printf("Tersten yazilisini gormek istediginiz 20 karakter giriniz.\n");
	
	gets(dizi);
	//scanf("%s", dizi);
	
	puts("\nDizinin tersten yazilisi.\n");
	//printf("\nDizinin tersten yazilisi.\n");
	
	for (i = 9; i >= 0; i--)
	{
		putchar(dizi[i]); 
		// printf("%c", dizi[i]);
	}
	
	return 0;
}
