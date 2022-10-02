//N elemanli bir dizide ki tek elemanlarin dizinin basina cift elemanlarin dizinin sonuna tasima

#include <stdio.h>

int main()
{
	int i,n,bas,son,gecici_deger;
	
	printf("Dizinin boyutu giriniz : ");
	
	scanf("%d",&n);
	
	int sayilar[n];
	
	printf("\nDizinin elemanlarini giriniz :\n");
	
	for(i = 0; i < n; i++)
	{
		printf("\n%d. eleman: ",i+1);
		
		scanf("%d",&sayilar[i]);
	}
	
	bas = 0;
	
	son = n - 1;
	
	while(bas < son)
	{
		if(sayilar[bas] % 2 == 0)
		{
			gecici_deger = sayilar[bas];
			
			sayilar[bas] = sayilar[son];
			
			sayilar[son] = gecici_deger;
			
			son--;
		}
		
		else
		{
			bas++;
		}
	}

	for(i = 0; i < n; i++)
	{
		printf("\n%d",sayilar[i]);
	}
	
	getch();
}
