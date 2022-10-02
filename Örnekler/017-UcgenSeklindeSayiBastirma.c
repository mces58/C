#include <stdio.h>

int main()
{
	system("color 5a");
	int i , j ,n;
	
	printf("Bir sayi giriniz: ");
	
	scanf("%d",&n);
	
	for (i= 0; i < n; i++)
	{
		for(j =0; j< i; j++)
		{
			printf("%d ",j);
			//s++;
		}
		printf("\n");
	}
	
	return 0;
}

/* 1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5 ... giden bir oruntu
*/
   
   
