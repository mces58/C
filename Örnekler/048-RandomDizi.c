#include <stdio.h>
#include <time.h>

int main()
{
	int boyut , i , j , geciciDeger;
	
	printf("Dizinin boyutunu giriniz: ");
	
	scanf("%d",&boyut);
	
	int sayilar[boyut];
	
	srand(time(NULL));
	
	
	for(i=0; i < boyut; i++)
	{
		sayilar[i] = rand() % 1000;
	}
	
	printf("\n");
	
	for(i=0; i < boyut; i++)
	{
		printf("%2d " , sayilar[i]);
	}
	
	
	for(i=0; i < boyut; i++)
	{
		for(j = 0; j < boyut-1; j++)
		{
			if(sayilar[j] < sayilar[j+1]) // bu buyukten kucuge siralýyor tersi için > yapmak yeterli
			{
				geciciDeger = sayilar[j];
			
				sayilar[j] = sayilar[j+1];
			
				sayilar[j+1] = geciciDeger;
			
			}
		}
	}
	
	printf("\n\nSiralanisi...\n\n");
	
	for(i=0; i < boyut; i++)
	{
		printf("%2d " , sayilar[i]);
	}
	
	printf("\n\nDizinin en buyuk ikinci elemani: %d\n",sayilar[1]);
	
	printf("\n\nDizinin en kucuk ikinci elemani: %d\n",sayilar[boyut-2]);

	
	return 0;
}
