// FLOOR VE CEIL FONKSIYONLARI
/* 
math.h dahil edilir.
bu fonksiyonlar kusuratli sayilari yuvarlamada kullanilir.

floor alta yuvarlar. Anlamida zemin, alt demek

ceis(seil) uste yuvarlar. Anlamida tavan, ust demek.

*/

#include <stdio.h>
#include <math.h>

int main()
{
	double sayi, alt,ust;
	
	printf("Kusuratli bir sayi giriniz..\n");
	
	scanf("%lf",&sayi);
	
	alt= floor(sayi);
	
	printf("Alta yuvarlanmis hali: %.2lf\n",alt);
	
	ust= ceil(sayi);
	
	printf("Uste yuvarlanmis hali: %.2lf\n",ust);
	
	return 0;
}
