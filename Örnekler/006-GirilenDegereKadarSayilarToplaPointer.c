#include <stdio.h>

void toplam(int *a)
{
	int i, toplam=0;
	
	for(i=0; i <= *a; i++)
	{
		toplam  += i;
	}
	
	printf("%d",toplam);
}


int main()
{
	int sayi,*ptr;
	
	printf("Bir sayi giriniz: ");
	
	scanf("%d",&sayi);
	
	ptr = sayi;
	
	toplam(&ptr);
	
	return 0;
}
