// FONKSIYONLARDA COK BOYUTLU DIZILER

#include <stdio.h>

void matrisi_goster(int matris[][4], int boyut)// burada boyut tanimlarken satir sayisini tanimlamiyoruz
// tek boyutlu da oldugu gibi yapiyoruz ama sutun sayisini matrise tanimliyoruz yani sutun icin ayri 
// int boyut tanimlama yapmiyoruz.
{
	int i,j;
	
	for(i = 0; i < boyut; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%2d ",matris[i][j]);
		}
		
		printf("\n");
	}
}


int main()
{
	int i,j,matris[3][4];
	
	printf("[3][4] boyutlarinda bir matris giriniz...\n");
	
	for(i=0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			scanf("%d",&matris[i][j]);
		}
	}
	
	system("cls");
	
	matrisi_goster(matris,3);
	
	return 0;
}
