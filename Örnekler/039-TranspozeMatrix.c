#include <stdio.h>

int main()
{
	
	int boyut,i,j;
	
	printf("Kare matrisin boyutunu giriniz: ");
	
	scanf("%d",&boyut);
	
	int matrix[boyut][boyut];
	
	printf("\nMatrisi giriniz: \n\n");
	
	for(i=0; i < boyut; i++)
	{
		for(j=0; j < boyut; j++)
		{
			printf("%d . satir %d. sutun: ",i+1 , j+1);
			
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("\nGirilmis olan matris:\n");
	
	for(i=0; i < boyut; i++)
	{
		for(j=0; j < boyut; j++)
		{
			printf("%3d ",matrix[i][j]);
		}
		
		printf("\n");
	}
	
	int transpoze[boyut][boyut];
	
	for(i=0; i < boyut; i++)
	{
		for(j=0; j < boyut; j++)
		{
			transpoze[i][j]=matrix[j][i];	
		}
	}
	
	printf("\nTranspozesi:\n");
	
	for(i=0; i < boyut; i++)
	{
		for(j=0; j < boyut; j++)
		{
			printf("%3d ",transpoze[i][j]);
		}
		
		printf("\n");
	}
	getch();
}
