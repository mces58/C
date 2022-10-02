// 2x2 MATRIXLERIN CARPIMI
// cok buyuk degerler girme int oldugu icin sinirini asiyor.

#include <stdio.h>
#define n 2

int main()
{
	int a[n][n],b[n][n], c[n][n];
	
	int i,j,k,toplam;
	
	printf("2x2 boyutunda bir A matrisi giriniz..\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("2x2 boyutunda bir B matrisi giriniz..\n");
		
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n\nA matrisi:\n");
		
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	

	printf("\n\nB matrisi:\n");
		
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}	


	printf("\n\nCarpim sonucu cikan C matrisi:\n");
		
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			toplam=0;
			
			for(k=0; k<n; k++)
			
// k icin acilmis olan for'da suslu parantez( {} ) yok koyunca hatali sonuc veriyor.Neden?
				toplam = toplam + a[i][k] * b[k][j];
			
				c[i][j]= toplam;
			
				printf("%4d",c[i][j]);
				
		}
		printf("\n");
	}
	
	return 0;
}
