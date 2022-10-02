//yildiz ile ucgen sekli
#include <stdio.h>

int main()
{
	system("color 47");
	
	int i, j,n;
	
	printf("Bir sayi giriniz: ");
	
	scanf("%d",&n);
	
	for(i = 1; i < n; i++)
	{
		for(j = 0; j < i-1; j++)
		{
			printf("* ");
		}
		printf("\n\t\t");
		
	}
	
		
	for(i = 1; i < n; i++)
	{
		for(j = n-1; j > i-1; j--)
		{
			printf("* ");
		}
		printf("\n\t\t");
	}
	
	return 0;
}
