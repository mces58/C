#include <stdio.h>

void en_buyuk()
{
	float a, b, c;
	
	printf("3 sayi girinz..\n");
	
	scanf("%f%f%f",&a,&b,&c);
	
	if (a > b && a > c)
	{
		printf("en buyuk %.2f",a);
	}
	
	else if (b > a && b > c)
	{
		printf("en buyuk %.2f",b);
	}
	
	else if(c > a && c > b)
	{
		printf("en buyuk %.2f",c);
		
	}
	else if (a == b && a > c) // bu olmazsa -1 ,-1 , -2 esit diyor bununla bu ihtimal kalkiyor
	{
		printf("en buyuk %.2f",a);
	}
	
	else 
	{
		printf("hepsi esit");
	}
}

int main()
{
	
	en_buyuk();
	
	getch();
}
