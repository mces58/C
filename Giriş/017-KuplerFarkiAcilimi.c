//KUPLER FARKI ACILIMI

#include <stdio.h>

int main()
{
	
	int a, b, sonuc;
	
	printf("iki tam sayi giriniz:\n");
	scanf("%d %d", &a, &b);
	
	
	sonuc = (a - b) * (a * a + a * b + b * b);
	
	printf("sonuc: %d", sonuc);
	
	return 0;
}





