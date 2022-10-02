//GIRILEN 3 SAYIDAN EN AZ BIRI 50'DEN BUYUKSE YETERLI AKSI HALDE YETERSIZ YAZAN PROGRAM
#include <stdio.h>

int main()
{
	
	float a, b, c;
	
	printf("3 sayi giriniz:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a > 50 || b > 50 || c > 50)
	{
		printf("yeterli\n",a, b, c);
	}
	
	else
	{
		printf("yetersiz\n");
		
	}
	
	getch();
}
