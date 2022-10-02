#include <stdio.h>
#include <math.h>

void kare_toplam ()
{
	int i,sayi,toplam =0;
	
	
	printf("bir sayi giriniz...\n");
	
	scanf("%d",&sayi);
	
	for (i=0; i <= sayi; i++)
	{
		
		toplam += pow(i,2);
	}

	printf("%d",toplam);
}


int main()
{
	
	kare_toplam();	
	
	
	return 0;
}
