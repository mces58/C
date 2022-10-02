// VERILEN TEK BOYUTLU DIZIDE ELEMAN ARAMA

#include <stdio.h>

int main()
{
	int sayilar[]={0,1,2,3,4,5},sayi,i,bulundu=0;
	
	printf("bir sayi giriniz..\n");
	scanf("%d",&sayi);
	
	for(i=0; i<6; i++)
	{
		if (sayilar[i]==sayi)
		{
			bulundu=1;
			break;
		}
	}
	
	if(bulundu==1)
	{
		printf("girilen %d degeri dizinin %d. indisinde bulundu.",sayi,i);
	}
	
	else
	{
		printf("sayi bulunamadi");
	}

	return 0;
}
