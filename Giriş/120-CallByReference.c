// CALL BY REFERENCE(ADRESS)

#include <stdio.h>

void yer_degistir(int *a, int *b)
{
	
	int gecici;
	
	gecici = *a;
	
	*a = *b;
	
	*b = gecici;
}

int main()
{
	int x = 5 , y = 10; 
	
	yer_degistir(&x,&y);
	
	printf("x: %d, y: %d",x,y);
	
	return 0;
}
/* burada x ve y nin adreslerini fonksiyona gonderek ve fonksiyonda da pointerlar olusturarak bu adreslerde ki
degerlerin yerlerini degistirdik fonk. bitti a ve b kayboldu bizimde x ve y nin yeri degismis oldu.
boylece fonksiyonlara pointer gondermeyi de gormus olduk 
*/

