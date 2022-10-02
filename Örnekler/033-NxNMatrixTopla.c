// N x N boyutlarindaki iki matrisi toplama

#include <stdio.h>

int main()
{
	system("color a0");
	
	printf("\t****KARE MATRISLERDE TOPLAMA****\n\n");
	
	int n,m,i,j;
	
	printf("1 . Kare matrisin boyutunu giriniz: ");
	
	tekrar:
	
	scanf("%d",&n);
	
	if(n < 1)
	{
		printf("\nBoyut 1'den kucuk olamaz bu yuzden boyutu 1'den buyuk giriniz: ");
		
		goto tekrar;
	}
	
	printf("\n2 . Kare matrisin boyutunu giriniz: ");
	
	scanf("%d",&m);
	
	if(n != m)
	{	
		system("cls");
	
		printf("Unutmayiniz iki tane kare matrisi toplamak icin boyutlari esit olmalidir.\n");
			
		printf("\n1 . matrisin boyutunu tekrar giriniz: ");
		
		
		goto tekrar;
	}
	
	system("cls");
	
	printf("1. Kare matrisin elemanlarini giriniz: \n");
	
	int a_matrix[n][n];
	
	for(i=0; i < n; i++)
	{
		for(j=0; j < n; j++)
		{
			printf("\n%d . satir %d . sutun: ",i+1, j+1);
			
			scanf("%d",&a_matrix[i][j]);
		}
	}
	
	system("cls");
	
	printf("2. Kare matrisin elemanlarini giriniz: \n");
	
	int b_matrix[m][m];
	
	for(i=0; i < m; i++)
	{
		for(j=0; j < m; j++)
		{
			printf("\n%d . satir %d . sutun: ",i+1, j+1);
			
			scanf("%d",&b_matrix[i][j]);
		}
	}
	
	int toplam[n][n];
		
	for(i=0; i < n; i++)
	{
		for(j=0; j < n; j++)
		{
			toplam[i][j] = (a_matrix[i][j] + b_matrix[i][j]);
		}
	}
	
	system("cls");
	
	printf("1 . Kare matrix:\n\n");
	
	for(i=0; i < n; i++)
	{
		for(j=0; j < n; j++)
		{
			printf("%4d ",a_matrix[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\n2. Kare matrix:\n\n");
	
	for(i=0; i < n; i++)
	{
		for(j=0; j < n; j++)
		{
			printf("%4d ",b_matrix[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\nToplamlarinin sonucu olusan kare matrix:\n\n");
	
	for(i=0; i < n; i++)
	{
		for(j=0; j < n; j++)
		{
			printf("%4d ",toplam[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
