// ASAL SAYI MI

#include <stdio.h>

int asal_mi(int sayi)
{
	int i;
	
	for(i = 2; i < sayi; i++)
	{
		if(sayi % i == 0)
		{
			return 0;// return deyiminin oldugu yerde fonksiyon biter 
		}
	}
	
	return 1;
}

int main()
{
	int sayi;
	
	printf("Bir tam sayi giriniz: ");
	
	scanf("%d",&sayi);
	
	
	if(asal_mi(sayi)==0)
	{
		printf("\n%d sayisi asal degildir.\n",sayi);
	}
	
	else if(sayi <= 1)
	{
		printf("\n%d sayisinda asallik aranmaz.\n",sayi);
	}
	else
	{
		printf("\n%d sayisi asaldir.\n",sayi);
	}
	
	return 0;
	
}
