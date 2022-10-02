#include <stdio.h>
#include <stdlib.h>

int *hesapla(int d1[], int size1, int d2[], int size2, int d3[])
{
	int i,j;
	
	for(i=0; i < size1; i++)
	{
		d3[i] = d1[i];
	}
	
	for(i=size1 , j= 0; i < size1 + size2; j++, i++)
	{
		d3[i] = d2[j];
	}
	
	return d3;
}


int main()
{
	int dizi1[] = {1,3,5};
	
	int dizi2[] = {2,4,6,8};
	
	int dizi3[7];
	
	hesapla(dizi1, 3, dizi2, 4, dizi3);
	
	int i;
	
	for(i=0; i < 7; i++)
	{
		printf("%d ",dizi3[i]);
	}
	
	return 0;
}


