//sifir girilenciye kadar sayi okuma sifir girilince ise girilen tüm sayilarin toplamini veren program
#include <stdio.h>

int main()
{
	system("color e");
	int sayi;
	
	int i = 1;
	
	int toplam = 0;
	
	printf("Donguden cikmak icin sifira basiniz.\n\n");
	
	while(1)
	{
		printf("%d . sayi:\n",i);
		
		scanf("%d",&sayi);
		
		toplam += sayi;
  
		i++ ;
		
		if(sayi == 0)
		
		break;
	}
	
	printf("\nGirilen sayilarin toplami: %d",toplam);
	
	return 0;
}
