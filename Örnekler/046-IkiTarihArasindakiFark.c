#include <stdio.h>

int gunAl(int gun)
{
	printf("Gunu giriniz...\n");
	
	scanf("%d",&gun);
	
	return gun;
}

int ayAl(int ay)
{
	printf("Ayi giriniz...\n");
	
	scanf("%d",&ay);
	
	return ay;
}

int yilAl(int yil)
{
	printf("Yili giriniz...\n");
	
	scanf("%d",&yil);
	
	return yil;
}

int main()
{
	int gun , ay , yil;
	
	gun = gunAl(gun);
	
	ay = ayAl(ay);
	
	yil = yilAl(yil);
	
	if(gun < 0 || gun > 31)
	{
		printf("\nHatali giris...\n");
		
		gun = gunAl(gun);
	}
	
	if(ay < 0 || ay > 12)
	{
		printf("\nHatali giris...\n");
		
		ay = ayAl(ay);
	}
	
	if(yil < 0)
	{
		printf("\nHatali giris...\n");
		
		yil = yilAl(yil);
	}
	
	int bugun = 8, buay = 8, buyil = 2021;
	
	int farkGun = 0 , farkAy = 0 , farkYil = 0;
	
	farkGun = gun - bugun;
	
	farkAy = ay - buay;
	
	farkYil = yil - buyil;
	
	if(farkGun < 0)
	{
		farkGun = -1 * farkGun;
	}
	
	if(farkAy < 0)
	{
		farkAy = -1 * farkAy;
	}
	
	if(farkYil < 0)
	{
		farkYil = -1 * farkYil;
	}
	
	printf("Bugunle girdiginiz tarih aradinda ki fark...\n%d gun %d ay %d yil",farkGun,farkAy,farkYil);
	
	return 0;
}
