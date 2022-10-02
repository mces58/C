#include <stdio.h>

int main()
{
	int boyut;
	
	printf("Dizinin boyutunu giriniz:");
	
	scanf("%d",&boyut);
	
	int dizi[boyut];
	
	int i;
	
	printf("\nDizinin elemanlarini giriniz:\n");
	
	for(i=0; i < boyut; i++){
		
		printf("\n%d . eleman: ",i+1);
		
		scanf("%d",&dizi[i]);
	}
	
	int *p_dizi;
	
	p_dizi = dizi; // p_dizi = dizi[0] dizinin ilk elemanini tutar iki tanimlama da ayni seye esit 
	
	for(i=0; i < boyut; i++){
		
		printf("%d ", *(p_dizi + i)); //*(p_dizi + i) == p_dizi[i] iki tanimlama ekrana basar diziyi
	}
	
	return 0;
}
