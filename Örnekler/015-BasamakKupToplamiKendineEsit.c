// 1 den 999'a kadar olan tam sayilarin basamaklarinin kup degerlerinin toplami kendine esit olan prog.
#include <stdio.h>

int main()
{
	system("color af");
	
	int birler,onlar,yuzler,i,kup_toplam; 
	
	for(i=1; i<=999; i++)
	{
		birler = i % 10;
		
		onlar = (i / 10) % 10;
		
		yuzler = i / 100;
		
		
		kup_toplam = (birler * birler * birler) + (onlar * onlar * onlar) + (yuzler * yuzler * yuzler);
		
		if(i == kup_toplam)
		{
			printf("%d\n",i);
		}

	}

	return 0;
}
