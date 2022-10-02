//BAZI TAKIMLARIN EFSANE OYUNCULARI
#include <stdio.h>

int main()
{
	int sayi;
	
	printf("Bazi futbol takimlarin efsane oyunculari.\n\n1- FENERBAHCE\n2- GALATASARAY\n3- BESIKTAS\n4- TRABZONSPOR\n5- ANTALYASPOR\n6- BURSASPOR\n");
	printf("Lutfen birini seciniz:\n");
	scanf("%d", &sayi);

	switch (sayi)
	{
		case 1 :	
			printf("Suphehiz ALEX DE SOUZA'dir.\n");
		break;
		
		case 2 :
			printf("Eh iste Alex kadar olmasada bir HAGI varmis.\n");
		break;
		
		case 3 :
			printf("Kartalin efsanesi DANIEL AMOKACHI.\n");
		break;
		
		case 4 :
			printf("Karadeniz firtinasinin estigi donemde SOTA ARVELADZE'yi saymazsak olmaz.\n");
		break;	
		
		case 5 : 
			printf("Yakin donemde onu izleme firsati buldugumuz icin sansliyiz.\nAkdeniz aksamlari onunla daha da bir guzeldi.SAMUEL ETO'O.\n");
		break;
		
		case 6 :
			printf("Sampiyonlugu getiren gol ile suphesiz Bursaspor'un efsanesi PABLO MARTIN BATALLA.\n");
		break;
		
		default :		
			printf("1 ile 6 arasinda bir secim yapiniz!\n\a");
		break;	
	}
	
	return 0;
}
