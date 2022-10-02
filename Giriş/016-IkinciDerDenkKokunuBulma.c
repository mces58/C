//2.DERECEDEN POLINOM FONKSIYONUN KOKUNU BULMA

#include <stdio.h>
#include <math.h>
int main()
{
	
	int a, b, c;
	float x1, x2, delta;
	
	printf("a sayisini giriniz:\n");
	scanf("%d", &a);
	
	printf("b sayisini giriniz:\n");
	scanf("%d", &b);
	
	printf("c sayisini giriniz:\n");
	scanf("%d", &c);
	
	delta = (b * b) - (4 * a * c);
	
	x1 = (-b + (sqrt(delta))) / 2 * a;//sqrt kok almamiza yariyor
	
	x2 = (-b - (sqrt(delta))) / 2 * a;
	
	printf("x1:%f\nx2:%f",x1, x2);
	
	return 0;
}
