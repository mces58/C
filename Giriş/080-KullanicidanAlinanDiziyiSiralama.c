//KULLANICIDAN ALINAN BIR DIZIYI SIRALAMA

#include <stdio.h>

int main()
{
	
	int sayilar[10];
	
	int i,k,gecici_deger;
	
	printf("10 tane sayi giriniz...\n");
	
	for (i=0; i<10; i++)
	{
		printf("%d. sayi: ",i+1);
		scanf("%d",&sayilar[i]);
	}
	
	for (i=0; i<10; i++)
	{
		for(k=0; k<9; k++)
		{
			if (sayilar[k] < sayilar[k+1]) // buyukten kucuge siraliyor tam tersi icin > koyman yeterli
			{
				gecici_deger = sayilar[k];
				
				sayilar[k] = sayilar[k+1];
				
				sayilar[k+1] = gecici_deger;
			}
		}
	}
			
	printf("\nSiralanisi...\n\n");
	
	for (i=0; i<10; i++)
	{
		printf("%d ", sayilar[i]);
	}
	
	printf("\nSeklinde olur.");
	
	return 0;
}
