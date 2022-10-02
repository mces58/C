#include <stdio.h>

int topla(int sayi)
{
	int i, toplam = 0;
	
	if(sayi <= 0)
 
	return 0;

	
/*	else
	{
		for(i=0; i <= sayi; i++)
		{
			toplam += i;
	
		}
	}
	return toplam;              
*/

	else 
	
	return sayi + topla(sayi - 1);	

}

int main()
{
	int sayi,deger;
	
	printf("Bir sayi giriniz..\n");
	
	scanf("%d",&sayi);
	
	deger =topla(sayi);
		
	printf("Girilen sayidan once ki tum sayilarin toplami: %d\n",deger);
	
	
	return 0;
}
