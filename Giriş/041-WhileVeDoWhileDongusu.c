// DO-WHILE, WHILE KARSILASTIRMA

#include <stdio.h>

int main()
{
	int x = 0;
	
	while (x < 10)
	{
		printf("while: %d\n",x);
		
		x++;
	}
	
	printf("x'in son degeri: %d\n",x);

	printf("\n\n");
	
	int a = 10;

	do
	{
		printf("do-while: %d\n",a);
		a--;
	}
	
	while (a > 0);
	
	printf("a'nin son degeri: %d",a);
	
	return 0;
} 
