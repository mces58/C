// manuel olarak metin dosyasi acmazsan if blogu calismaz

#include <stdio.h>

int main()
{
	FILE *dosya;
	
	char karakter;
	
	dosya = fopen("deneme.txt","r"); 
	
	/* burada kendim manuel olarak metin belgesi olusturdum icine de adimi yazdim burada da onu cagirdim 
	
	r ile okudu.*/
	

	if(dosya != 0)
	{
		karakter = fgetc(dosya); // burada da adimin ilk harfini konsola baastirdi
		
		printf("%c",karakter);
	}	

	else
	
	printf("Dosya bulunamadi");
	
	fclose(dosya);
	
	getch();
}
