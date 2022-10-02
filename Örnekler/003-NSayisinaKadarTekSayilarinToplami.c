#include <stdio.h>

int tek_sayi_toplami(int sayi)
{
	
	int i, toplam =0;
	
	
	for (i=0; i <= sayi; i++)
	{
		if(i % 2 == 1)
		{
			toplam += i;
		}
		
	}
	
	return toplam;
}


int main ()
{
	int sayi;
	
	printf("bir sayi giriniz..\n");
	
	scanf("%d",&sayi);
	
	printf("%d",tek_sayi_toplami(sayi));
	
	return 0;
}
