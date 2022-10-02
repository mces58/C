//N x M boyutlu iki matrisin toplamini bulan c programi.

#include <stdio.h>

int main()
{
	system("color 3e");
	
	int satir, sutun ,i, j; 
	
	int a_matris[10][10], b_matris[10][10];
	
	printf("\t**** N x M BOYUTLU MATRISLERDE TOPLAMA ****\n\n");
	
	printf("Satir sayisini giriniz: ");
	
	tekrar1:
	
	scanf("%d",&satir);
	
	if(satir < 1)
	{
		system("cls");
		
		printf("HATALI GIRIS!!\nSatir sayisini tekrar giriniz: ");
		
		goto tekrar1;
	}
	
	system("cls");
	
	printf("\t**** N x M BOYUTLU MATRISLERDE TOPLAMA ****\n\n");
	
	printf("Sutun sayisini giriniz: ");
	
	tekrar2:
	
	scanf("%d",&sutun);
	
	if(sutun < 1)
	{
		system("cls");
		
		printf("HATALI GIRIS!!\nSutun sayisini tekrar giriniz: ");
		
		goto tekrar2;
	}
	
	system("cls");
	
	printf("1 . matrisin elemanlarini giriniz...\n\n");
	
	for(i=0; i < satir; i++)
	{
		for(j=0; j < sutun; j++)
		{
			printf("%d . satir %d . sutun elemani: ",i+1, j+1);
			
			scanf("%d",&a_matris[i][j]);
		}
	}
	
	printf("\n2 . matrisin elemanlarini giriniz...\n\n");
	
	for(i=0; i < satir; i++)
	{
		for(j=0; j < sutun; j++)
		{
			printf("%d . satir %d . sutun elemani: ",i+1, j+1);
			
			scanf("%d",&b_matris[i][j]);
		}
	}
	
	int toplam[10][10];
	
	for(i=0; i < satir; i++)
	{
		for(j=0; j < sutun; j++)
		{
			toplam[i][j] =a_matris[i][j] + b_matris[i][j]; 
		}
	}
	
	system("cls");
	
	printf("Girmis oldugunuz 1 . matrix: \n\n");
	
	for(i=0; i < satir; i++)
	{
		for(j=0; j < sutun; j++)
		{
			printf("%4d ",a_matris[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\nGirmis oldugunuz 2 . matrix: \n\n");
	
	for(i=0; i < satir; i++)
	{
		for(j=0; j < sutun; j++)
		{
			printf("%4d ",b_matris[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\nToplamlarinin sonucu olusan %d x %d matrix: \n\n",satir,sutun);
	
	for(i=0; i < satir; i++)
	{
		for(j=0; j < sutun; j++)
		{
			printf("%4d ",toplam[i][j]);
		}
		
		printf("\n");
	}
	
	getch();
}
