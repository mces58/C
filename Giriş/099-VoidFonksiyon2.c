// VOID MAIN (parametreli)

/*
#include <stdio.h>

// tek parametreli fonksiyon ornegi

void kontrol_et();

int main()
{
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	kontrol_et(sayi);
}

void kontrol_et(int tek_cift)
{
	if (tek_cift % 2 == 0)
	printf("%d sayisi ciffttir.",tek_cift);
	
	else
	printf("%d sayisi tektir.",tek_cift);
	
}	*/

#include <stdio.h>

// iki parametreli fonksiyon ornegi

void kutu_ciz(int boy, int en)
{
	int i,j;
	
	for(i=0; i<=boy; i++)
	{
		for(j=0; j<=en; j++)
		{
			printf("* ");
		}
	printf("\n");
	}
}

int main()
{
	int boy, en;
	
	printf("Boy bilgisi: "); scanf("%d",&boy);
	
	printf("En bilgisi: ");  scanf("%d",&en);
	
	printf("\n");
	
	kutu_ciz(boy,en);
	
	return 0;
	
}

