//3 BOYUTLU DIZI

#include <stdio.h>

int main ()
{
	
	int gecen[2][2][3];// 2 okulda 2 sinifin 3 ogrencisi seklinde boyut arttikca genellik artiyor
	int i,j,k;
	int A=0,B=0,C=0,D=0,E=0;
	
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			for (k=0; k<3; k++)
			{
				printf("%d. okulda ki %d. sinifin %d. ogrencisinin notu: \n",i+1, j+1, k+1);
				scanf("%d",&gecen[i][j][k]);
				
				
				if  (gecen[i][j][k]<0 || gecen [i][j][k]>100)
				{
					printf("0 ile 100 arasinda deger giriniz..\n");
				}
				
				else if(gecen[i][j][k]>90 && gecen[i][j][k]<=100)
				{
					A++;				
				}
				
				else if(gecen[i][j][k]>80 && gecen [i][j][k]<=90)
				{
					B++;
				}		
				
				else if(gecen[i][j][k]>70 && gecen [i][j][k]<=80)
				{
					C++;
				}
				
				else if(gecen[i][j][k]>60 && gecen [i][j][k]<=70)
				{
					D++;
				}
				
				 else
				{
					E++;
				}
			}
		}
	}
	
	for(i=0; i< 2; i++)
	{
		for(j=0; j<2; j++)
		{
			for(k=0; k<3; k++)
			{
				printf("%d. okulda ki %d. sinifin %d. ogrencisinin notu: %d \n",i+1, j+1, k+1,gecen[i][j][k]);
			}
		}
	}

	
	printf("\nA alan kiþi sayisi: %d\n", A);
	printf("\nB alan kiþi sayisi: %d\n", B);	
	printf("\nC alan kiþi sayisi: %d\n", C);
	printf("\nD alan kiþi sayisi: %d\n", D);
	printf("\nE alan kiþi sayisi: %d\n", E);	
	
	
	return 0;
}
