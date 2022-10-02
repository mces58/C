//Surekli sayi girilmelidir. Toplamlari 100 un ustune ciktiginda program sonlanip toplami ekrana gosteren prog.

#include <stdio.h>

int main()
{
	system("color c");
	
	int sayi;
	int toplam = 0;
	int i = 0;
	
	while(1)
	{
		printf("%d . sayiyi giriniz.",i+1);
		
		scanf("%d",&sayi);
		
		toplam  += sayi;
		
		i++;
		
		if(toplam > 100)
		break;
	}
	
	printf("%d",toplam);
}

