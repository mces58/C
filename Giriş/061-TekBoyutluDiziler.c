/* TEK BOYUTLU ARRAY (DIZI) GIRIS

**Array'ler ayni veri tipinden cok sayida degiskeni bir arada tutmaya yarayan yapilardir.
Array'in terimlerine indisleriyle ayri ayri ulasilailir.
Array'lerin butun elemanlarina ulasmak icinse basit bir for dongusu ile ekrana yazdirilabilir
Tek boyutlu dizilere vektorde denmektedir.

*/

#include <stdio.h>

int main()
{
	int dizi[5] = {1, 2, 3, 4, 5};//Burada 5 elemanli dizi tanimladik ve icine degerleri atadik 
	{
		printf("%d\n", dizi[3]);// dizi[3] esiti dizinin 3. indisi demek bu da 4 esit oluyor.Ýndisler 0. elemandan baslyip 1. 2. 3. ... diye devam ediyor.
	}
	
	{
		printf("%d\n", dizi[2] * dizi[4]);// Dizinin elemanlari ile islem yapabilirz.
	}
	
	int a = 0;
	
	for (; a < 5; a++)
	{
		printf("\n%d", dizi[a]);// Burada basit bir a tanimladik ve boylece dizinin tum elemanlarini ekrana bastirabilirz.
	}
	
	return 0;
}


