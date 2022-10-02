//POINTER TUTAN POINTERLAR

#include <stdio.h>

int main()
{
	int a = 5;
	
	int *b;
	
	int **c;// pointer tutan pointer
	
	int ***d;// pointer tutan pointerin pointeri
	
	printf("a = %d\n",a);
	
	b = &a;
	
	c = &b;
	
	d = &c;
	
	***d = 10;
	
	printf("a = %d",a);
	
	/* d gitti c nin adresine c gitti b nin adresine b gitti a nin adresine 5 i 10 yapti yani soyle dusunebilirz
	
	d---> c ---> b ---> a
    |	                ^
	--------------------^
	*/

	return 0;
}
