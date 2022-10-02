#include <stdio.h>

int fak_hesap(int sayi)
{
	if (sayi==1)
	{
		return 1;
	}
	
	return sayi * fak_hesap(sayi-1);
	
}

int main()
{
	int a;
	
	printf("Kac tane sayinin faktoriyelini hesaplamak istiyorsunuz?\n");
	
	scanf("%d",&a);
	
	int sayi[a],sonuc,i;
	
	printf("%d sayi giriniz:\n",a);
	
	for(i=0; i < a; i++)
	{
		printf("%d. sayi: ",i+1);
		
		scanf("%d",&sayi[i]);
	}
	
	printf("\n\n***************\n\n");
	
	for(i=0; i < a; i++)
	{
		sonuc = fak_hesap(sayi[i]);
		
		printf("%d sayisinin faktoriyeli: %d\n",sayi[i],sonuc);
		
	}
	return 0;
}
