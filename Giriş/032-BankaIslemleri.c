// BANKA ISLEMLERI YAPAN PROGRAM
 
#include <stdio.h>

int main(void)
{
	int islem;
	int bakiye = 1000;
	int tutar;
	
	printf("Islemler:\n1: Bakiye Sorgulama.\n2: Para Cekme.\n3: Para Yatirma.\n4: EFT.\n5: Kart Iade.\n\n");
	printf("Islem seciniz.\n\n");
	scanf("%d", &islem);
		
	switch (islem)
	{
		case 1 :
			printf("Bakiyeniz: %d TL\n", bakiye);
		break;
		
		case 2 :
			printf("Bakiyeniz: %d TL\n", bakiye);
			printf("Cekilecek tutar.\n");
			scanf("%d", &tutar);
		
		if (tutar > bakiye)
		{
			printf("Bakiyeniz yetersiz.\n\a");
		}
		
		else if (tutar < 0)
		{
			printf("Hatali tutar girdiniz!\n\a");
		}
		
		else	
		{
			bakiye = bakiye - tutar;
			printf("Yeni Bakiyeniz: %d\n", bakiye);
		}
		break;
		
		case 3 :
			printf("Bakiyeniz: %d TL\n", bakiye);
			printf("Yatirilacak tutar.\n");
			scanf("%d", &tutar);
		
		 if (tutar < 0)
		{
			printf("Hatali tutar girdiniz!\n\a");
		}
		
		else
		{
		    bakiye = bakiye + tutar;
			printf("Yeni Bakiyeniz: %d\n", bakiye);
		}
		break;
		
		case 4 :
			printf("Bakiyeniz: %d TL\n", bakiye);
			printf("EFT yapilacak tutar.\n");
			scanf("%d", &tutar);
			
		if (tutar > bakiye)
		{
			printf("Bakiyeniz yetersiz!\n\a");
		}
		
		else if (tutar < 0)
		{
			printf("Hatali tutar girdiniz!\n\a");
		}
			
		else
		{	
			bakiye = bakiye - tutar;
			printf("Yeni bakiyeniz: %d\n", bakiye);
		}
		break;	
			
		case 5:
			printf("Kartiniz iade edildi.\n");	
		break;
		
		default :
			printf("Lutfen 1 ile 5 arasinda bir tercih yapiniz...\n\a");
		break;	
	}
	
	return 0;
}
