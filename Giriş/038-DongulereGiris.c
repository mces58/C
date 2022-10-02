//DONGULERE GIRIS
//WHILE DONGUSU

/* 
while , do-while , for ve goto dongusu vardir lakin en sik kullanilani while ile for'dur.

while yapisi;

while( SARTLI ÝFADE )
{
	dondurulecek deyim

	artirma
}
bu kadar 
*/

#include <stdio.h>

int main ()
{
	int i;
	i = 1; //i = 0;'dan da baslayabilir
	
	while(i <= 5)
	{
		printf("merhaba can.\n");
		
		i++; // ++i ; olabilir
	}
	
	printf("%d",i); // i'nin son degerini gosterir
	
	return 0;
}
