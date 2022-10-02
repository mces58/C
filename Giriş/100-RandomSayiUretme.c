//VOID ORNEK

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sayisal_loto();


int main()
{
	sayisal_loto();
	return 0;
}


void sayisal_loto()
{
	int i,j;
	
	srand(time(NULL));/* bu ifade program her calistiginda farkli random sayilar dondurur.NULL buyuk yazilir
	 ve bu ifade time.h kutuphanesinde bulunur   */ 
	
	for(i=0; i<6; i++)
	{
		printf("%d. kolon: ",i+1);
	
		for(j=0; j<6; j++)
		{
			printf("%d\t",1+rand()%45);/* 1 ile 45 arasindaki sayilari random olarak dondurur.istersek
			sayilari degistirebiliriz srand(time(NULL)) ifadesini koymaz isek her defasinda ayni random
			sayilari donderir.   */
		}
	printf("\n");	
	}
	
}


