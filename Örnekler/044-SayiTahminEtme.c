#include <stdio.h>
#include <time.h>

int main()
{
	int sayi=0, tahmin=0, kac_kez=0;
	
	srand(time(NULL));
	
	sayi = rand() %100 + 1; 
	
	printf("1 ile 100 arasinda bir tahmin yapiniz...\n");
	
	printf("Tahmininizi giriniz: ");
	
	tekrar:
	
	scanf("%d", &tahmin);
	
	if(tahmin < 0 || tahmin > 100)
	{
		printf("\nTekrar tahmin yapiniz...");
		
		goto tekrar;
	}
	
	while(sayi != tahmin)
	{
		if(sayi < tahmin)
		{
			printf("\nYanlis tahmin...\nTahmininiz tutulan sayidan buyuk tekrar giriniz:");
					
			scanf("%d",&tahmin);
	
			kac_kez++;
		}
		
		else if(tahmin < sayi)
		{
			printf("\nYanlis tahmin...\nTahmininiz tutulan sayidan kucuk tekrar giriniz:");
				
			scanf("%d",&tahmin);
			
			kac_kez++;
		}
	}
	
	if(sayi==tahmin)
	{
		printf("\nTebrikler tahmininiz dogru.%d . defa da buldunuz",kac_kez+1);
	}
	
	return 0;
}
