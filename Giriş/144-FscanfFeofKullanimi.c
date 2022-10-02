// manuel olarak metin dosyasi olustur

#include <stdio.h>

int main()
{
	FILE *dosya = fopen("deneme3.txt","r");
	
char kelime[30][20];// 30 un amaci kelime sayisi 20 nin amaci bir kelimenin kac harften olustugunu tutmak icin
	
	int i=0;
	
	if(dosya != NULL)
	{
		while(!feof(dosya)) // feof dosya sonu demek yani burada unlem ile dosya sonuna gelinmedigi surece
		{                   // bu dongu donsun demek   
			
			fscanf(dosya,"%s",&kelime[i]);
			
			printf("%s ",kelime[i]);
			
			i++;
		}
	}
	
	/* yukarida yazdigimiz satirlarin amaci ben manuel olarak bir metin dosyasi olusturdum ve icine baya 
	
	bir uzun seyler yazdim ve onu burada okuutum yani her keime icin dizi tanimlamadim onun yerine 
	
	cok boyutlu dizi ile tum kelimeleri ekrana bastim .
	
	*/
	
	else 
		printf("Dosya bulunamadi");
	
	
	fclose(dosya);
	
	getch();
}
