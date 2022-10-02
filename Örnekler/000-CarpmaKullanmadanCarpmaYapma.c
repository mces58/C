#include <stdio.h>

void carpma_yok()
{
	int sayi1 , sayi2, i, j, toplam = 0;
	
	printf("iki sayi giriniz..\n");
	
	scanf("%d%d",&sayi1,&sayi2);
	
	
	for (i=0; i < sayi1; i++)
	{
		toplam += sayi2;
	}
	
	printf("%d",toplam);
}


int main()
{
	carpma_yok();
	
	return 0;
}
