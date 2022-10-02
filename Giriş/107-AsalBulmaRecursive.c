// ASAL BULMA

#include <stdio.h>

int asal_bul(int sayi)
{
	int i, asal=1;
	
	if(sayi == 0 || sayi == 1)
	
	return 1;
	
	else 
	{
		for(i = 2; i < sayi; i++)
		{
			if(sayi % i == 0)
			
			asal =0;
		}
	
		if(asal != 0)
		
		printf("\n%d",sayi);
		
		return asal_bul(sayi - 1);
	}
}


int main()
{
	int sayi;
	
	printf("Bir sayi giriniz...\n");
	
	scanf("%d",&sayi);
	
	printf("Girilen sayidan once ki tum asal sayilar...");

	asal_bul(sayi);
	
	return 0;
}
