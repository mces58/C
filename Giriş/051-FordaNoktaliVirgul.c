#include <stdio.h>

int main()
{
	int i;
	
	for(i = 2; i <= 6; i = i + 2); // (;) ye dikkat ediniz
	printf("%d\t", i + 1);
	return 0;
}
/* ; etkisi i donguye giriyor lakin ekrana deger basmiyor en son i 6 oldugu zaman
i 2 artiyor ve 8 oluyor ve printf 'in 8 bir artiyor ve 9 oluyor.*/
