// N x M boyutlu matristeki en buyuk elemani ve bu elemanin satir ve sutun yerini bulan prog.

#include <stdio.h>

int main()
{
	system("color f1");
	
	int i,j,n,m;
	
	int sat,sut;
	
	printf("Matrisin satir boyutunu giriniz: ");
	
	scanf("%d",&n);
	
	printf("\nMatrisin sutun boyutunu giriniz: ");
	
	scanf("%d",&m);
	
	int matrix[n][m];
	
	for(i=0; i < n; i++)
	{
		for(j=0; j < m; j++)
		{
			printf("\n%d . satir %d . sutun: ",i+1, j+1);
			
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("\n\n *****Girilen matrix*****\n");
	
	for(i=0; i < n; i++)
	{
		for(j=0; j < m; j++)
		{
			printf("%5d",matrix[i][j]);
		}
		printf("\n");
	}
	
	int max;
	
	max= matrix[0][0];
	
	for(i=0; i < n; i++)
	{
		for(j=0; j < m; j++)
		{
			if(max < matrix[i][j])
			{
				max = matrix[i][j];
				
				sat= i;
				
				sut= j;
			}
		}
	}
	
	printf("\nMatristeki en buyuk eleman: %d", max);
	
	printf("\nBu elemanin matriste ki yeri %d . satir %d . sutundur.",sat+1, sut+1);
	
	getch();
}
