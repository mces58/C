#include <stdio.h>

int main()
{
	int fabrika[2][3];
	int i,j;
	
	for (i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d. fabrika %d. eleman: ",i+1, j+1);
			scanf("%d",&fabrika[i][j]);
			
			if(fabrika[i][j]>100)
			{
			fabrika[i][j] += fabrika[i][j] * 0.10;
			}
		}
	}
	
	printf("\n\n\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("maaslar: %d TL\n",fabrika[i][j]);
		}
	}

	return 0;
}
