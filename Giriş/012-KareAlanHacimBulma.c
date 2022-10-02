// Karenin Alanini ve Hacmini Hesaplama

#include <stdio.h>

int main()
{
	float sayi1, alan, hacim;
	
	printf("Lutfen bir sayi giriniz:\n");
	
	scanf("%f", &sayi1);
	
	
	alan = sayi1 * sayi1;
	
	hacim = sayi1 * sayi1 * sayi1 ;// hacim = alan * sayi1;
	
	printf("Karenin alani: %.3f\nKupun hacmi: %.3f", alan, hacim);

	return 0;
}


