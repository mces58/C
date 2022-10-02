#include <stdio.h>
#include <string.h>


int main()
{
	char veri[] = "mehmetcan eser";
	
	int uzunluk = strlen(veri);
	
	int i;
	
	
	FILE *dosya_p = fopen("fputc.txt","w");
	
	
	
	if(dosya_p == 0)
	{
		printf("Dosya olusturulamadi");
	}
	
	else
	{
		for(i=0; i < uzunluk; i++)
		{
			fputc(veri[i],dosya_p); // ilk neyi yazdiracagimizi giriyoz sonra da nereye yazdiracagimizi
			
			printf("\t%c\n",veri[i]);
		}
	}
	
	printf("\n\nHem dosya ya hemde konsola basariyla yazdirildi");
	
	
	getch();
}
