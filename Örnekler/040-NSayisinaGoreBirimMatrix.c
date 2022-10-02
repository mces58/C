#include <stdio.h>

int main()
{
	int boyut,i,j;
	
	printf("Kaca kaclik birim matrix olusturmak istiyorsunuz: ");
	
	scanf("%d",&boyut);
	
	int birim_matrix[boyut][boyut];
	
	int sayac =0;
	
	for(i=0; i < boyut; i++)
	{
		for(j=0; j < boyut; j++)
		{
			if(i == j)
			{
				birim_matrix[i][j]=1;
			}
			
			else
			{
				birim_matrix[i][j]=0;
			}
		}
	}
	
	for(i=0; i < boyut; i++)
	{
		for(j=0; j < boyut; j++)
		{
			printf("%2d",birim_matrix[i][j]);
		}
		
		printf("\n");
	}
	getch();
}
