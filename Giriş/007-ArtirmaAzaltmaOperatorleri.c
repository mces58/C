#include <stdio.h>

int main()
{
	int x = 5;
	
	printf("x = %d \n", x);
	printf("++x = %d \n", ++x);
	printf("x = %d \n", x);
	
	x =5;
	printf("x++ = %d \n", x++);
	printf("x = %d \n", x);
}
/*
islem yoksa ++ veya-- yerinin onemi yok 
ama isleme giriyorsa o zamam onemli 
x=5 iken --x * --x =12 olur cunku x ilk 4 olur sonrasinda 3 olur
x=5 iken ++x * ++x =42 olur cunku x ilk 6 olur sonrasinda 7 olur
x=5 iken x-- * x-- =20 olur cunku x'in ilk degerini alir(5) sonra bir azaltir(4)
x=5 iken x++ * x++ =30 olur cunku x ilk 5 sonra bir artar(6) olur 
*/
