// manuel metin dosyasi olustur

#include <stdio.h>

int main()
{
	FILE *dosya;
	
	dosya = fopen("deneme4.txt","r");


    char okul_no[10][5];// 10 ogrencinin okul no 5 ise okul_nolarinin uzunlugu da 5 .
	
	//okul_no sabit oldugu icin yani uzerinde islem yapilmadigi icin char tipinde alindi int te alinabilirdi
	
	char isim[10][10];// 10 ogrencinin ismi ogrencilerin isim uzunlugu uzunluguda 10
	
	int notlar[10];// 10 ogrencinin notlari 
	
	// notlar uzerinde islem yapilabilir o yuzden int tipinde aldim
	
	int i=0;

	
	if(dosya != 0)
	{
		while(!feof(dosya))
		{
		
		fscanf(dosya,"%s %s %d",&okul_no[i], &isim[i], &notlar[i]);
		
		printf("%s %s %d\n",okul_no[i],isim[i],notlar[i]);
		
		i++;
	
		}
	
	}
	else
	{
		printf("Dosya bulunamadi");
	}
	
	fclose(dosya);
	
	return 0;
}
