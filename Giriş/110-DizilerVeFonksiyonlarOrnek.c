#include <stdio.h>
#define yaz printf


void maximum(int sayilar[],int boyut)
{
	int i = 0, max = 0;
	
	for(; i < boyut; i++)
	{
		
		if(sayilar[i] > max)
		{
			max = sayilar[i];
		}
	}
	
	yaz("Maximum deger: %d",max);
}

int main()
{
	int bes_sayi[5], i = 0;
		
	yaz("Bes sayi giriniz..\n");
	
	for(; i < 5; i++)
	{
		yaz("%d. sayi: ",i+1);
			
		scanf("%d",&bes_sayi[i]);
	}	
	
	maximum(bes_sayi, 5);
	
	return 0;
}

