#include <stdio.h>
#include <time.h>

int main()
{
	system("color cb");
	
	int kactaBitsin;
	
	printf("Oyunun kacta bitmesini istersiniz: ");
	
	scanf("%d",&kactaBitsin);
	
	system("cls");
	
	int t = 1;
	
	int k = 2;
	
	int m = 3;
	
	int i;
	
	int selection;
	
	int player = 0;
	
	int computer = 0;
	
	int draw = 0;
	
	int random;
	
	srand(time(NULL));
	
	printf("\t\t\t\t\t1 = Tas , 2 = Kagit , 3 = Makas\n");
	
	
	printf("\nOyun %d . elde biter...\n\n",kactaBitsin);
	
	for(i = 0; i < kactaBitsin; i++)
	{
		printf("\nBir secim yapiniz: ");
	
		scanf("%d" , &selection);
		
		random = rand() % 3 +1;
		
		if(selection==1)
		{
			if(random ==1)
			{
				printf("\nOyun berabere...\n");
				
				draw++;
			}
			
			if(random==2)
			{
				printf("\nBilgisayar kazandi...\n");
				
				computer++;
			}
			
			if(random==3)
			{
				printf("\nSiz kazandiniz...\n");
				
				player++;
			}
		}
		
		else if(selection==2)
		{
			if(random ==1)
			{
				printf("\nSiz kazandiniz...\n");
				
				player++;
			}
			
			if(random==2)
			{
				printf("\nOyun berabere...\n");
				
				draw++;
			}
			
			if(random==3)
			{
				printf("\nBilgisayar kazandi...\n");
				
				computer++;
			}
		}
			
		else if(selection==3)
		{
			if(random ==1)
			{
				printf("\nBilgisayar kazandi...\n");
				
				computer++;
			}
			
			if(random==2)
			{
				printf("\nSiz kazandiniz...\n");
				
				player++;
			}
			
			if(random==3)
			{
				printf("\nOyun berabere...\n");
				
				draw++;
				
			}
		}
		
		else
		{
			printf("\nHatali giris...\n");
		}
	
	}
	
	sleep(3);
	
	system("cls");
	
	printf("Toplam sonuc...");
	
	printf("\n\nSiz: %d ----- Bilgisayar: %d ----- Berabere: %d",player,computer,draw);
	
	if(computer > player)
	{
		printf("\n\nBilgisayar kazandi.");
	}
	
	else if(player > computer)
	{
		printf("\n\nSiz kazandiniz.");
	}
	
	else
	{
		printf("\n\nBerabere bitti.");
	}
	
	return 0;
}
