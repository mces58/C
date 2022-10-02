// BIR SABIT ILE BELLI BIR ARALIKTA KI SAYILARIN CARPIMI

#include <stdio.h>

int main()
{
	
	int a;
	int b;
	int carpim = 0;
	
	printf("bir sayi girin\n");
	scanf("%d", &a);
	
	for (a; b >= 0 && b <= 20; b++)
	{
		if (a < 0)
		{
			break;
		}
		carpim = a * b;
		printf("carpim: %d\n", carpim);
	}	
	
	return 0;
}
