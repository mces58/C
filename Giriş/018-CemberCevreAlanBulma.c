// CEMBERIN CEVRESI VE ALANINI HESAPLAMA


#include <stdio.h>
#include <stdlib.h>
#define PI 3.14// pi'yi burada tanimladik


int main()
{
	float cemberin_yaricapi;
	float cemberin_cevresi, cemberin_alani;
	
	printf("Cemberin yaricapini giriniz:\n");
	scanf("%f", &cemberin_yaricapi);
	
	
	cemberin_cevresi = 2 * PI * cemberin_yaricapi;
	
	cemberin_alani = PI* cemberin_yaricapi * cemberin_yaricapi;
	
	printf("Cemberin cevresi: %.3f\nCemberin alani: %.3f", cemberin_cevresi, cemberin_alani);
	
	return 0;	
}

