#include <stdio.h>

int main()
{
	int matris[3][3];
	int i, j;
	int toplam = 0;
	
	printf("3x3'luk matrisi giriniz...\n");
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &matris[i][j]);
		}
	}
	
	printf("\n****Matrisiniz****\n\n");
	
	for(i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d ",matris[i][j]);
			toplam += matris[i][j];
		}
		printf("\n");
	}
	
	printf("\nMatrisiniz satirlari toplami...\n\n");
	
	printf("Toplam: %d", toplam);

	return 0;
}
