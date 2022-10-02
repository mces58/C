//GIRILEN 3 SAYININ HEPSI 0'DAN BUYUK VE TEK ISE BASARILI GIRIS DEGILSE BASARISIZ GIRIS
#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("3 sayi giriniz.\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a, b, c > 0 && a, b, c % 2 == 1)
	{
		printf("basarili giris.\n");
	}
	else
	{
		printf("basarisiz giris.\n");
	}
	
	return 0;
}
