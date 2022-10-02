#include <stdio.h>
#include <string.h>

int main()
{
	/*
	char sehir[]="sivas";
	
	int i;
	
	for( i=0; i < strlen(sehir); i++)
	{
		
		printf("%c\n",sehir[i]);
	}

 yukarida sivas'in her karakterini ayri ayri yazdirdik.
 */

	
	char sehir[30];
	
	int i=0;
	
	printf("Bir sehir giriniz...\n");
	
	gets(sehir);//scanf("%s", sehir); scanf'i bosluk karakterini almadigi icin yazmadim..
	
	for(i= strlen(sehir); i >= 0; i--)
	{
		printf("%c\n",sehir[i]);
		
	}
	
	// yukarida ise girilen sehri tersten yazma	
	
	return 0;
}
