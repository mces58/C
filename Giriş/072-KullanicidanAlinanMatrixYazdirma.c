// KULLANICIDAN ALINAN MATRIXI EKRANA YAZDIRMA

#include <stdio.h>

int main()
{
	int matris[3][3];
	
	int i,j;
	
	printf("Bir matrix giriniz...\n");
	
	for(i =0; i <3; i++)
	{
		for(j =0; j <3; j++)
		{
			scanf("%d", &matris[i][j]);
		}
	}
	
	printf("\nMatrisiniz:\n");
	
	for (i =0; i <3; i++)
	{
		for(j =0; j <3; j++)
		{
			printf("%d ", matris[i][j]);
		}	
		printf("\n");
	}
	
	return 0;
}
