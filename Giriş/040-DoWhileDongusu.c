// DO-WHILE DONGUSU

/*

do
{
	islemler;
}

while (sart);

return 0;

yapisi boyle 
*/


/*
#include <stdio.h>

int main()
{
	int i = 10;// i = 0 yazsak ciktisi 0 olacak oysa biz 0 yazmasini istemiyoruz bu yuzden do-while pek tercih edilmez
	
	do 
	{
		printf("%d\n", i);
		
		i--;
	}
	
	while (i > 0);
	
	return 0;
} 

*/

#include <stdio.h>

int main()
{
	
	int i, hane = 0, toplam = 0;
	printf("bir sayi giriniz.\n");
	scanf("%d", &i);
	
	do
	{
		toplam += (i % 10);
		
		hane++;
		
		i= i / 10;
	}
	
	while (i > 0);
	
	printf("basamaklar toplami: %d\nbasamak sayisi: %d", toplam, hane);
	
	return 0;
}

