#include <stdio.h>

int main()
{
	// fputs () --> dosyaya bir karakter dizisi yazar tip verileri kullanilmaz
	
	// fprintf () --> dosyaya bicimlendirilmis veriyi yazar tip verileri kullanilir
	
	
	
	FILE *dosya; // dosyayi olusturduk
	
	/*
	
	dosya = fopen("deneme.txt","w"); // dosyayi actik dosyanin adini girdik ve modunu girdik (only write)
	
	fputs("Merhaba Dunya",dosya);
	
	
	*/
	
	
	/*
	
	char mesaj[]="Merhaba Can";
	
	dosya = fopen("deneme2.txt","w");
	
	fprintf(dosya, "%s\nBen senin bilgisayarin monster.",mesaj);
	
	
	*/ 
	
	
	dosya = fopen("carpim_tablosu.txt","w");
	
	int i,j;
	
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			fprintf(dosya,"%d x %d = %d\t",j , i , i * j);
		}
		
		fprintf(dosya,"\n");
	}
	
	
	fclose(dosya); //dosyayi kapattik dosya ile ilgili tum islemler fopen ile fclose arasinda olur
	
	return 0;
}
