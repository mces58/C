// MATRIX EKRANA BASMA	

#include <stdio.h>

int main()
{
	// 4x2 bir matris tanimlandi
	int matrix[4][2];
	int i;
	int j;
	
	printf("4x2'lik bir matrix giriniz...\n");
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<2; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("\nMatrisiniz...\n");
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<2; j++)
		{
			printf(" %2d ", matrix[i][j]);
		}
		
		printf("\n");
	}

	return 0;
}
