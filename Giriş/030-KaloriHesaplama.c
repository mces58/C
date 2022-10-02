// ADIM SAYISINA GORE KALORI HESAPLAYAN PROGRAM
#include <stdio.h>

void main()
{
	
	int adim_sayisi;	
	float yakilan_kalori;
	
	printf("5000 ile 20000 arasinda toplam adim sayinizi giriniz.\n");
	scanf("%d", &adim_sayisi);
	
	if ( adim_sayisi >= 5000 && adim_sayisi <= 10000)
	{
		yakilan_kalori = 0.05 * adim_sayisi;
		printf("Toplam yakilan kalori miktari: %.3f joule.\n", yakilan_kalori);
	}
	
	else if (adim_sayisi > 10000 && adim_sayisi <= 20000) 
	{
		yakilan_kalori = 0.05 * adim_sayisi;
		printf("Toplam yakilan kalori miktari: %.3f joule.\n", yakilan_kalori);
	}
	else 
	{
		printf("Lutfen belirtilen aralikta bir sayi giriniz!\a");
	}
	
	getch();
}

