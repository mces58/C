#include <stdio.h>

unsigned int fibonaci(int indis)
{
		
	if(indis <= 1)
	
	return indis;
	
	else
	
	return fibonaci(indis - 1) + fibonaci(indis - 2);
}


int main ()
{
	int sayi;
	
	printf("Kacinci indisi aramak istiyorsunuz.\n");
	scanf("%d",&sayi);
	
	printf("%d. indisin fibonaci dizisinde ki degeri: %u",sayi,fibonaci(sayi));
	
	return 0;
}
