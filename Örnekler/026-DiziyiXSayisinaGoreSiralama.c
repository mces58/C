/*Dizinin elemanlarini disaridan girilen x sayisina gore kucukleri dizinin basina buyuklerini ise dizinin 
sonuna yerlestiren prog.*/

#include <stdio.h>

int main()
{
	system("color 1e");
	
	int n,i,j,x;
	
	printf("Dizinin boyutunu giriniz: ");
	
	tekrar:
	
	scanf("%d",&n);
	
	if(n <=0)
	{
		printf("\nBoyutu tekrar giriniz: ");
		
		goto tekrar;
	}
	printf("\nHangi sayiya gore siralamak istersiniz: ");
	
	scanf("%d",&x);
	
	int sayilar[n];
	
	int gecici_deger = 0;
	
	printf("\nDizinin elemanlarini giriniz:\n");
	
	for(i=0; i < n; i++)
	{
		printf("\n%d . eleman: ",i+1);
		
		scanf("%d",&sayilar[i]);
		
	}
	
	for(i=0; i < n; i++)
	{	
		for(j=0; j< n-1; j++)
		{
		
			if(sayilar[j] > x)
			{
				gecici_deger = sayilar[j];
			
				sayilar[j]= sayilar[j+1];
			
				sayilar[j+1]= gecici_deger;
			
			}
		
		}
	}
	
/*	
	int bas, son;
	
	bas =0;
	
	son = n-1;
	
	while(bas < son)
	{
		if(sayilar[bas] > x)
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
	
*/
	
	for(i=0; i < n; i++)
	{
		printf("%d\n",sayilar[i]);
	}
	
	getch();
}
