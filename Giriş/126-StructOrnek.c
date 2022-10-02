#include <stdio.h>

struct araba_bilgi
{
	char ad[20];
	
	int tekerlek;
	
	int vites_sayisi;
	
	int model_yili;
	
	float motor_gucu;
	
}araba1,araba2;



int main()
{
	
	 struct araba_bilgi araba1= {"doblo",4, 5, 2005, 2.9};

printf("%s %d %d %d %.2f",araba1.ad,araba1.tekerlek,araba1.vites_sayisi,araba1.model_yili,araba1.motor_gucu);

printf("\n\n\n");
	
	araba2 = araba1;// boylece araba1'deki verileri araba2 ye atadik
	
printf("%s %d %d %d %.2f",araba2.ad,araba2.tekerlek,araba2.vites_sayisi,araba2.model_yili,araba2.motor_gucu);

	return 0;
}
