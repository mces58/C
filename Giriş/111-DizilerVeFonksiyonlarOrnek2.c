// SINIFIN ORTALAMASINI HESAPLAMA

#include <stdio.h>

void sinif(int not_oku[],int boyut)
{		
	int i=0;

	printf("Sinav notlari giriniz\n");
	
	for(; i < boyut; i++)
	{
		printf("%d. ogrencinin notu: ",i+1);
		
		scanf("%d",&not_oku[i]);
		
	}
	
	system("cls");

	for(i=0; i < boyut; i++)
	{
	   printf("%d. ogrencinin notu : %d\n",i+1, not_oku[i]);
	}
}

double sinif_ort(int not_oku[],int boyut)
{
	int i, toplam = 0;
	
	for(i = 0; i < boyut; i++)
	{
		toplam += not_oku[i];
	}
	
	double ort = toplam / boyut;
	
	printf("\nSinifin ortalamasi: %.2lf",ort);
}



int main()
{
	int sinavlar[5];
		
	sinif(sinavlar,5);
	
	sinif_ort(sinavlar,5);
	
	return 0;
}
