// FOR DONGUSU
/*
#include <stdio.h>

int main()
{
	int i;
	
	for (i = 0; i < 5; i++) // for'un icinde deger atama sartli ifade ve artirma yapabiliriz.
	{
		printf("%d\n",i);
	}
	
	return 0;
}
*/

#include <stdio.h>

int main()
{
	int c, a, n;
	
	for (c = 0, a = 1, n = 2; c < 4 && a < 5 && n < 6; c++, a++, n++)// 3 degiskenin de sartini baslangic degerini ve artirmasini boylece tanimlayabiliriz 
	{
		printf("%d  %d  %d\n",c, a, n);
	}
	
	printf("c'nin son degeri: %d\na'nin son degeri :%d\nn'in son degeri: %d", c, a, n);
	
	return 0;
}
// for blogunun icine tekrar bir for, while, if-else, switch-case vs. yazilabilir.
