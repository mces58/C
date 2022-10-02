#include <stdio.h>

void cift_sayi_adedi(int sayi)
{
	int i, adet=0, toplam =0;
	
	float ort =0;
	
	for(i=1; i <= sayi; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d\n",i);
			
			toplam += i;
			
			adet++;
		}
	}
	
	printf("\n1 ile %d arasinda %d tane cift sayi vardir.",sayi,adet);
	
	ort = toplam / adet;
	
	printf("\nCift sayilarin ortalamalari: %.2f",ort);
}


int main()
{
	int sayi;
	
	printf("Bir sayi giriniz: ");
	
	scanf("%d",&sayi);
	
	cift_sayi_adedi(sayi);
	
	return 0;
}
