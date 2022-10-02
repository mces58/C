#include <stdio.h>

void goster(int sayi)
{
	int i;
	
	printf("\n\nGirilen sayidan onceki sayilar:\n");
	
	for(i=0; i <= sayi; i++)
	{
		printf("%d\n",i);
	}
	
}


int main()
{
	system ("COLOR b");
	
	int sayi;
	
	printf("Bir sayi giriniz: ");
	
	scanf("%d",&sayi);
	
	goster(sayi);
	
	return 0;
}
