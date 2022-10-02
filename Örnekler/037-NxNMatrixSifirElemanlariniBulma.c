//N x N boyutlu bir matriste bazi hatalar olmustur. Bu hatalar sifir ile gosterilmektedir. Her sutunda
// kac tane hata oldugunu bulan prog.

#include <stdio.h>

int main()
{
	system("color ac");
	
	int boyut,i,j; 
	
	printf("Dizinin boyutunu giriniz: ");
	
	scanf("%d",&boyut);
	
	int matrix[boyut][boyut];
	
	for(i=0; i < boyut; i++)
	{
		for(j=0; j < boyut; j++)
		{
			printf("\n%d. satir %d. sutun: ",i+1 , j+1);
			
			scanf("%d",&matrix[i][j]);
		}
	}
	
	int hata[2*boyut];
	
	for(i = 0; i < boyut; i++)
	{
		hata[i] = 0;
		
		for(i= 0; i < boyut; i++)
		{
			for(j = 0; j< boyut; j++)
			{
				if(matrix[i][j]==0)
				{
					hata[i]++;
				}
			}
		}
	}
	
	for(i= 0; i <boyut; i++)
	{
		printf("\n%d . sutundaki hata sayisi: %d",i+1,hata[i]);
	}
	
	getch();
}
