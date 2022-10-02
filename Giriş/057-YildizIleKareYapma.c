// * ILE KARE YAPMA
#include <stdio.h>

int main()
{
	int satir, sutun, kenar_uzunlugu;
	
	printf("kenar uzunlugunu girin:\n");
	scanf("%d", &kenar_uzunlugu);
	
	for (satir = 0; satir < kenar_uzunlugu; satir++)
	{
		for (sutun = 0; sutun < kenar_uzunlugu; sutun++)
		{
			printf("* ");
		}
		
		printf("\n");
	}

	return 0;
}
