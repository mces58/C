//GIRILEN NOTU HARF SISTEMINE DONDEREN PROGRAM
#include <stdio.h>

void main()
{
	int puan;
	
	printf("notunuzu giriniz.\n");
	scanf("%d", &puan);
	
	switch (puan / 10)
	{
		case 10 :
		
		if (puan <= 100)	
		{
			printf("A\n");
		}
		else
		{
			printf("Hatali giris\n\a");
		}
		break;
		
		case 9 :
			printf("A\n");
		break;
		
		case 8 :
			printf("B\n");
		break;
		
		case 7 :
			printf("C\n");
		break;
		
		case 6 :
			printf("D\n");
		break;
		
		case 5 :
		case 4 :
		case 3 :
		case 2 :
		case 1 :
		case 0 :
	    
	    if (puan >= 0)
		{
			printf("E\n");
		}
		else
		{
			printf("Hatali giris\n\a");
		}
		break;
		
		default :
			printf("Hatali giris\n\a");
	}

	getch();
}
