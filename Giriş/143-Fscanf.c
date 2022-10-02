// bu kodun calismasi icin manuel olarak bir metin belgesi olusturmalisin

#include <stdio.h>

int main()
{
	
	FILE *dosya;
	
	dosya = fopen("deneme2.txt","r");
	
	char ad[10];// adim icin 
	
	char soyad[10];// soyadim icin
	
	int yas;// yasim icin
	
	
	if (dosya != NULL)
	{
		fscanf(dosya,"%s%s%d",&ad, &soyad, &yas);
		
		printf("%s %s %d",ad, soyad, yas);
	}
	
	/* yukarda yaptigimiz islem su ben manuel olarak bir metin belgesi olusturdum icine adimi soyadimi ve 
	
	yasimi yazdim sonra fcanf ile o dosyanin icinde ki bilgileri okudum ve konsola bastirdim yani bu sefer
	
	metin belgesini bilgisayar degilde ben olusturdum .tersten yapma gibi dusun.
	
	*/
	else 
		printf("Dosya bulunamadi");
	
	
	// peki her kelime icin ayri ayri bir seyler mi tanimlamam gerekiyor?elbette hayir onu diger kodda gosterelim
	
	
	fclose(dosya);
	
	getch();
}
