// IF-ELSE VE SWITCH-CASE ORNEGI

#include <stdio.h>

int main()
{
	
	int yasiniz, babanizin_yasi, secim, toplam, fark, carpim, gelecek, gelecek_islemleri;
	
	printf("Sizin ve babanizin yaslari uzerinde bir takim islemler.\n\n");
	
	printf("Suan ki yasinizi giriniz.\n");
	
	tekrar:
		
	scanf("%d", &yasiniz);
	
	if(yasiniz < 0)
	{
		system("cls");
		
		printf("Yasiniz negatif olamaz!\nTekrar giriniz: \a");
		
		goto tekrar;
		
	}
	
	system("cls");
	
	printf("Sizin ve babanizin yaslari uzerinde bir takim islemler.\n\n");
	
	printf("Babanizin suan ki yasini giriniz.\n");
	
	tekrar2:
	
	scanf("%d", &babanizin_yasi);
	
	if(babanizin_yasi < 0)
	{
		system("cls");
		
		printf("Babanizin yasi negatif olamaz!\nTekrar giriniz: \a");
		
		goto tekrar2;
	}
	
	system("cls");
	
	if(yasiniz >= babanizin_yasi)
	{
		printf("Babanizla yasit veya ondan buyuk olamazsiniz.\nYasinizi tekrar giriniz: \a");
		
		goto tekrar;
	}
	
	printf("Kac yil sonrasini hesaplamak istiyorsunuz.\n");
	
	tekrar3:
	
	scanf("%d", &gelecek);
	
	if(gelecek < 1)
	{
		system("cls");
		
		printf("Hatali giris!\nTekrar giriniz: \a");
		
		goto tekrar3;
	}
	
	system("cls");
	
	secim :
	
	system("cls");
	
	printf("Bir secim yapiniz:\n\n");
	
	printf("1- Suan ki yaslar toplamini hesaplama.\n");
	printf("2- Suan ki yaslar farkini hesaplama.\n");
	printf("3- Suan ki yaslar carpimini hesaplama.\n");
	printf("4- %d yil sonraki yaslarin toplamini hesaplama.\n", gelecek);
	printf("5- %d yil sonraki yaslarin farkini hesaplama.\n",gelecek);
	printf("6- %d yil sonraki yaslarin carpimini hesaplama.\n",gelecek);	
	scanf("%d", &secim);
	
	switch (secim)
	{		
		case 1 :		

				toplam = yasiniz + babanizin_yasi;
				printf("Yaslar toplami: %d\n", toplam);
		
		break;
		
		case 2 :

				fark = babanizin_yasi - yasiniz;
				printf("Yaslar farki: %d\n", fark);		
		
		break;	
		
		case 3 :
	
			 	carpim = babanizin_yasi * yasiniz;
			 	printf("Yaslar carpimi: %d\n", carpim);

		break;			
		
		case 4 :	

			  	gelecek_islemleri = 2 * gelecek + yasiniz + babanizin_yasi;
				printf("%d yil sonra ki yaslar toplaminiz: %d\n",gelecek, gelecek_islemleri);

		break;			
		
		case 5: 
			  	gelecek_islemleri = (gelecek + babanizin_yasi) - (gelecek + yasiniz);
				printf("%d yil sonra ki yaslar farki: %d\n", gelecek,gelecek_islemleri);

		break;			
			  	gelecek_islemleri = (gelecek + babanizin_yasi) * (gelecek + yasiniz);
				printf("%d yil sonra ki yaslar carpimi: %d\n", gelecek,gelecek_islemleri);
	
		break;			
			   
			
		default :
			printf("\nsecim yapin\n\a");
			
			goto secim;
		
		break;	
	}	

	return 0;
}
