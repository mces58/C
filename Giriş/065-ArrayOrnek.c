#include <stdio.h>

int main()
{
	int ogr_notu[10];
	int aa = 0, bb = 0, cc = 0, dd = 0, ff = 0;
	int i = 0;

	printf("Notlari giriniz...\n");
	for (; i < 10; i++)
	{

		printf("%d. not\n", i+1);
		scanf("%d", &ogr_notu[i]);
		
		if (ogr_notu[i] >= 90 && ogr_notu[i] <= 100)
		{
			aa++;
		}
		
		else if (ogr_notu[i] >= 80 && ogr_notu[i] <= 89)
		{
			bb++;
		}	
		
		else if (ogr_notu[i] >=70  && ogr_notu[i] <= 79)
		{
			cc++;
		}
		
		else if (ogr_notu[i] >= 60 && ogr_notu[i] <= 69)
		{
			dd++;
		}
		
		else if (ogr_notu[i] >= 0 && ogr_notu[i] <= 59)
		{
			ff++;
   		}
   		
	}
	
	printf("%d adet AA.\n", aa);
	printf("%d adet BB.\n", bb);
	printf("%d adet CC.\n", cc);
	printf("%d adet DD.\n", dd);
	printf("%d adet FF.\n", ff);

	return 0;
}
