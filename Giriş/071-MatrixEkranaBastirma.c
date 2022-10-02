// COKLU DIZILERE DEVAM

/* Simdi bir matrisin tamamini ekrana bastiralim .Matrisimiz: 7 8 
.															  9 3  olsun. 
*/

#include <stdio.h>
int main()
{
	int matris[2][2]={{7,8},{9,3}};	
	
	int i ;// satýr için
	int j ;// sütun için
	
	for (i=0; i < 2; i++)// satýr için for
	{
		for (j=0; j < 2; j++)// sütun için for
		{
			printf("%d ",matris[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}

