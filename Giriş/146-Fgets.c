#include <stdio.h>

int main()
{
	FILE *dosya;
	
	char a[50];
	
	dosya = fopen("deneme5.txt","r");
	
	if (dosya != 0)
	{
	
	fgets(a,50,dosya);
	
	printf("%s\n",a);
	
	fgets(a,50,dosya);
	
	printf("%s\n",a);
	
	fgets(a,50,dosya);
	
	printf("%s\n",a);
	
	fgets(a,50,dosya);
	
	printf("%s\n",a);
	
	fgets(a,50,dosya);
	
	printf("%s\n",a);

	}
	/*
	
	Gelecegim bekle dedi gitti 
	Ben beklemedim, o da gelmedi. 
	Olum gibi bir sey oldu 
	Ama kimse olmedi..
	-Ozdemir Asaf
	
	manuel metin dosyasi actim icine de bu siiri yazdim
	
	gets bir satiri okuyor hepsini okumuyor her satir icin ayri bir gets ile okutup ekrana bastirdik 
	
	*/
	
	else 
		printf("dosya bulunamadi");
	
	fclose(dosya);
	
	return 0;
}
