//GIRILEN SAYI 0 ILE 100 ARASINDA VE CIFT ISE SAYI UYGUN AKSI HALDE UYGUN DEGIL
#include <stdio.h>

int main()
{
	int sayi;
		
	printf("bir sayi giriniz.\n");	
	scanf("%d", &sayi);
	
	if(sayi > 0 && sayi < 100 && sayi % 2 == 0 && sayi != 0 && sayi != 100)
	{
		printf("sayi uygun\n");
	}
	
	else
	{
		printf("sayi uygun degil\n\a");
	}	

	return 0;
}
