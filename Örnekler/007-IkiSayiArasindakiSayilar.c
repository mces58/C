#include <stdio.h>

int main()
{
	int i,sayi1,sayi2;
	
	tekrar_giris:
	
	printf("Kucuk sayiyi giriniz:\n");
	
	scanf("%d",&sayi1);
	
	printf("Buyuk sayiyi giriniz: \n");
	
	scanf("%d",&sayi2);
	
	if(sayi1 > sayi2)
	{
		printf("\nHatali giris tekrar giriniz:\a\n\n");
		
		goto tekrar_giris;
	}
	
	else if(sayi1==sayi2)
	{
		printf("\nArada kalan tam sayi yoktur.\n");
	}

	else
	{
	
	printf("\n%d ile %d arasindaki sayilar: ",sayi1,sayi2);
	
	for(i= sayi1+1; i < sayi2; i++)
	{
		printf("%d ",i);
	}
	
	}
	return 0;
}
