#include <stdio.h>

float us_alma(float taban, float us)
{
	if(us== 0)
	{
		return 1;
	}
	return taban * us_alma(taban, us-1);
}


int main()
{
	system("color ed");
	
	float n, x;
	
	printf("Taban sayisini giriniz: ");
	
	scanf("%f",&n);
	
	printf("\nUs sayisini giriniz: ");
	
	scanf("%f",&x);
	
	printf("\nSonuc: %.2f",us_alma(n,x));
	
	
	getch();	
}
