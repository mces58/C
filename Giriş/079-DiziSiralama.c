// DIZILERDE SIRALAMA

#include <stdio.h>

int main()
{
	
	int dizi[]={44,5,77,34,1};
	
	int i,j,gecici_deger;
	
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
			if (dizi[j] > dizi[j+1] )
			{
				gecici_deger = dizi[j];
				
				dizi[j] = dizi[j+1];
				
				dizi[j+1] = gecici_deger;
			}
		}
	}
	
	printf("Siralanisi...\n");
	
	for (i=0; i<5; i++)
	{
		printf("%d ", dizi[i]);
	}
	
	return 0;
} 
