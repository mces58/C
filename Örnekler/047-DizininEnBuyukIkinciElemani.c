#include <stdio.h>

int *diziAl(int dizi[] , int boyut)
{
	int i;
	
	printf("Dizinin elemanlarini giriniz...\n");
	
	for(i=0; i < boyut; i++)
	{
		scanf("%d",&dizi[i]);
	}
	
	return dizi;
}



int main()
{
	int boyut;
	
	printf("Dizinin boyutunu giriniz...\n");
	
	scanf("%d",&boyut);
	
	int sayilar[boyut] , i, j, geciciDeger = 0;
	
	sayilar[boyut]= *diziAl(sayilar,boyut);
	
	for(i=0; i < boyut; i++)
	{
		for(j = 0; j < boyut-1; j++)
		{
			if(sayilar[j] < sayilar[j+1])
			{
				geciciDeger = sayilar[j];
			
				sayilar[j] = sayilar[j+1];
			
				sayilar[j+1] = geciciDeger;
			
			}
		}
	}
	
	for(i=0; i < boyut; i++)
	{
		printf("\n%d",sayilar[i]);
		
	}
	
	printf("\nEn buyuk ikinci eleman: %d",sayilar[1]);
	
	return 0;
}
