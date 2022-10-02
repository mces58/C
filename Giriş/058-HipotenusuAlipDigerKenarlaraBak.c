// HIPOTENUSU ALIP DIGER KENARLARI KONTROL EDEN PROGRAM

#include <stdio.h>

int main()
{
	int hipo, a, b;
	int x = 0;
	
	printf("Hipotenusu giriniz:\n");
	scanf("%d", &hipo);
	
	for (a = 1; a <= hipo; a++)
	{
		for (b = 1; b <= hipo; b++)
		{
			if (a * a + b * b == hipo * hipo)
			{
				printf("%d - %d\n", a, b);
				x++;
			}
			
		}
	}
	printf("\n");
	
	if(x == 0)
	{
		printf("Hipotenusu %d olan tam sayi cifti yoktur.\n", hipo);
	}
	return 0;
}
