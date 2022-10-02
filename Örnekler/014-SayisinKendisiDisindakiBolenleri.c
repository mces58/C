#include <stdio.h>

int main()
{
	system("color b");
	
	int sayi,i, sayac = 0, toplam = 0;
	
	printf("Bir sayi giriniz: ");
	
	scanf("%d",&sayi);
	
	printf("\n%d sayisinin tam bolenleri:\n",sayi);
	
	for(i=2; i < sayi; i++)
	{
		if(sayi % i == 0)
		{
			sayac++;
			
			printf("%d\n",i);
			
			toplam += i;
		}
	}
	
	printf("\n%d tane boleni vardir.\n",sayac);
	
	printf("Bolenlerin toplami: %d",toplam);
	
	return 0;
}
