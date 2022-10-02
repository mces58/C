#include <stdio.h>

void main()
{
	int puan = 10;
	
	printf("%d", puan - 2);
	printf("%d", puan * 2);
	printf("%d", puan / 2);
	printf("%d", puan % 2);
	printf("%d", 5 + 5);
	printf("%2d", 2 *2 + 4 - 2);
	
	return 0;
}
/*Bu ornekte \n'in onemi ortaya cikmaktadir.Bir onceki yapilan ayni ornekte cevaplar
newline yaparken burada \n olmadiði icin yanyana yazilmis bulunuyor*/
/* eger printf icindeki %'nin onune 2 3 4 ... herhangi bir sayi gelirse o sayi kadar 
bosluk birakir */
