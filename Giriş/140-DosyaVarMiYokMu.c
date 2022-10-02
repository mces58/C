#include <stdio.h>

int main()
{
	FILE *dosya_p = fopen("kitap.txt","w");
	
	if (dosya_p == NULL)
	{
		printf("Dosya olusturulamadi");
	}
	
	else 
		printf("Dosya basariyla acilmistir");
	
	/* 
	yukarida yaptigimiz programin amaci sudur kitap adli bir text olusturuyor modu "w " tipinde kitap.txt
	
	olusturulamazsa if e giriyor ve dosya olusturulamadiyi basiyor ama kitap.txt olusturulursa else giriyor
	
	ve dosya olusturuluyor simdi asagida baska bi modda yazalim 

	*/	
	
	fclose(dosya_p);
	
	printf("\n\n\n");
	
	
	
	FILE *dosya2_p = fopen("para.txt","r");	
	
	if(dosya2_p == 0)
		printf("Boyle bir dosya bulunamadi");
	
	else 
		printf("Dosya bulundu");
	
	
	
	/* 
	burada ise sunu amacladim eger ki modumuz "r" ise ve bizimde para.txt adli text'imiz yok ise if e
	
	girerek dosya bulunamadi der cunku r modu sadece okuma yapar yazma yapmayacagi icin txt acamaz o
	
	eger para.txt w ile olustursaydim  sonradan r ile kontrol etseydim else girerek dosya bulundu diyecekti.

	*/

	fclose(dosya2_p);
	
	getch();
}
