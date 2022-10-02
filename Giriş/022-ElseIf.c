/* ELSE IF
birden fazla kosul varsa else if yapisi kullanilir. 
basit bir ornek*/

#include <stdio.h>

void main()
{
	int sayi1, sayi2;
	
	printf("iki tane tamsayi giriniz.\n");
	scanf("%d %d", &sayi1, &sayi2);
	
	if ( sayi1 > sayi2)
	{
		printf("%d > %d\n", sayi1, sayi2);
	}
	
	else if (sayi1 == sayi2)
	{
		printf("%d = %d\n\a", sayi1, sayi2);// \a uyari sesi cikariyor
	}
	
	else
	{
		printf("%d < %d\n",sayi1, sayi2);
	}
	
	getch();
}

