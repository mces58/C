// N elemanli bir dizinin tek indisli elemanlarini baska bir diziye atma

#include <stdio.h>

int *dizi_al(int dizi[] , int size)
{
	int i;
	
	printf("\nDizinin elemanlarini giriniz:\n\n");
		
	for(i=0; i < size; i++)
	{
		printf("%d . elemani: ",i);
		
		scanf("%d",& dizi[i]);
	}
	
	return dizi;
}

int main()
{
	system("color 4b");
	
	int i, boyut;
	
	printf("Dizinin boyutunu giriniz: ");
	
	scanf("%d",&boyut);
	
		
	int sayilar[boyut];
	
	dizi_al(sayilar,boyut);
	
	
	printf("\nGirilmis olan dizi: \n");
	
	for(i= 0; i < boyut; i++)
	{
		printf("%d\n",sayilar[i]);
	}
	
	int sayac =1;
	
	int tek_indis[sayac];
	
	for(i=1; i <=boyut ; i+=2)
	{
		tek_indis[sayac] = sayilar[i];
		
		sayac += 1;
	}
	
/*
	int sayac=1;
	
	i=1;

	while(i<= boyut)
	{
		tek_indis[sayac]=sayilar[i];
		
		i=i+2;

		sayac = sayac +1;
	}
	
	for(i= 1; i <= sayac-1; i++)
	{
		printf("\n%d" , tek_indis[i];
	}
	
*/

	int indis = 1;
	
	printf("\nDizinin tek indisli elemanlari:\n");
	
	for(i=1; i <= sayac-1; i++)
	{
		printf("\n%d . indis : %d",indis,tek_indis[i]);
		
		indis += 2;
	}
	
	
	getch();
}
