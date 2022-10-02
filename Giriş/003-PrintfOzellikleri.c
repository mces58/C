#include <stdio.h>

int puan;
/*3.satirdaki ifade burada ayrica tanimlanabilir veya int main'in govdesinde de tanimlanabilir.
ornegin int puan = 10*/
int main()
{
	puan = 10;
	printf("%d \n", puan - 2);
	printf("%d \n", puan * 2);
	printf("%d \n", puan / 2);
	printf("%d \n", puan % 2);
	printf("%d \n", 5 +5);
	printf("%d", 2 * 2 + 4 - 2);
	
	return 0;
	
}
/* Goruldugu gibi her printf fonksiyonu icin icindeki deger hesaplaniyor bu deger puana bagli ise 
puana atanan deger ile islemler yapilir ama puana bagli degilse bu islemler direkt kendi yapilir*/
