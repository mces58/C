// HANGI AYDA OLDUGUMUZU YAZAN PROGRAM
#include <stdio.h>

int main()
{
	int ay;
	
	printf("kacinci aydasiniz?\n");
	scanf("%d", &ay);
	
	switch (ay)
	{
		case 12 :
		
		case 1 :
				
		case 2 :
			printf("kis mevsimi\n");	
		
		break;
		
		case 3 :
		
		case 4 :
		
		case 5 :
			printf("ilk bahar mevsimi\n");
		
		break;
		
		case 6 :
		
		case 7 :
		
		case 8 :
			printf("yaz mevsimi\n");
		
		break;
		
		case 9 :
			
		case 10 :	
			
		case 11 :
			printf("son bahar mevsimi\n");	
			
		break;
		
		default :
			printf("Hatali giris.\n\a");
		
		break;		
	}
	
	return 0;
}
