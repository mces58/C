// N x N boyutlu bir matrisin esas koseginin elemanlarinin toplamini bulma
#include <stdio.h>

int main()
{
	system("color 4b");
	
	int N;
	
	printf("N x N boyutunda boyutunda bir matrix giriniz:\n");
	
	printf("\nN boyutunu giriniz: ");
	
	tekrar:
	
	scanf("%d",&N);
	
	if(N <= 0)
	{
		printf("\nBoyutu tekrar giriniz: ");
		
		goto tekrar;
	}
	
	int i,j,matrix[N][N];
	
	for(i=0; i < N; i++)
	{
		for(j=0; j < N; j++)
		{
			printf("\n%d . satir %d . sutun: ",i+1,j+1);
			
			scanf("%d",&matrix[i][j]);
		}
	}
	
	int toplam = 0;
	
	/*
	int sayac = 0;
	
	for(i=0; i < N; i++)
	{
		if(sayac < N)
		{
			toplam += matrix[sayac][sayac];
		
			sayac++;
		}
	}
	
	*/
	//Yukarida ki benim yazdigim asagida ki daha pratiði olan.
	
	for(i=0;i<N;i++)
	{
		toplam += matrix[i][i];
	}
	
	system("cls");
	
	printf("Girmis oldugunuz matrix:\n\n");
	
	for(i=0; i < N; i++)
	{
		printf("\t");
		for(j=0; j < N; j++)
		{
			printf("%3d ",matrix[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\nEsas kosegenlerinin toplami: %d",toplam);
	
	getch();
}
