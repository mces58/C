#include <stdio.h>
#define pi 3.14

void cevre_alan()
{
	float y_cap;
	
	float cevre =0, alan =0;
	
	printf("yari capi giriniz...\n");
	
	
	scanf("%f",&y_cap);
	
	
	cevre = 2 * pi * y_cap; 
	
	alan = pi * y_cap * y_cap; 
	
	
	printf("Dairenin cevresi :%.2f\nDairenin alanin :%.2f",cevre,alan);
	
}


int main()
{
	cevre_alan();
	
	return 0;
}
