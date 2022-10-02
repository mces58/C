#include <stdio.h>

int main()
{
	system("color f0");
	
	int boyut;
	
	printf("N x N boyutlu matrisin N degerini giriniz: ");
	
	scanf("%d",&boyut);
	
	int i,j,matrix[boyut][boyut];
	
	printf("\nMatrisin elemanlarini giriniz:\n");
	
	for(i=0; i < boyut; i++)
	{
		for(j=0; j < boyut; j++)
		{
			printf("\n%d . satir %d . sutun:",i+1, j+1);
			
			scanf("%d",&matrix[i][j]);
		}
	}
	
	int sutun_toplam[50];
	
	for(i=0; i < boyut; i++)
	{
		sutun_toplam[i]=0;
			
		for(i=0; i < boyut; i++)
		{
			for(j=0; j < boyut; j++)
			{
				sutun_toplam[j] += matrix[i][j];
			}
		}
	}
	
	system("cls");
	
	printf("Girilmis olan matrix:\n\n");
	
	for(i=0; i < boyut; i++)
	{
		for(j=0; j < boyut; j++)
		{
			printf("%3d ",matrix[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\nSutunlarinin toplami:\n\n");
	
	for(i=0; i < boyut; i++)
	{
		printf("%3d ",sutun_toplam[i]);
	}
	
	getch();
}
