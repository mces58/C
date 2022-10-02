#include<stdio.h>

int main()
{
	int i,j,n;
	
	int yedek,kontrol;
	
	int mat[10][10];

	printf("Kare Matrisin Boyutunu Giriniz :");

	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d.satir, %d.sutun elemani : ",i,j);

			scanf("%d",&mat[i][j]);
		}
	}
	
	kontrol=1;
	
	for(i=2;i<=n;i++)
	{	
		for(j=1;j<=i-1;j++)
		{
			if(mat[i][j]!=mat[j][i])
			{
				kontrol=0;
			}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%5d",mat[i][j]);
		}
		
		printf("\n");
	}
	
	if(kontrol==1)
	{
		printf("Matris Simetriktir");
	}
	else
	{
		printf("Matris Simetrik Degildir");
	}
	
	getch();
}
