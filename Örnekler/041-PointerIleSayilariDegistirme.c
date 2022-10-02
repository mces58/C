#include <stdio.h>

int main(){
	
	int sayi1, sayi2;
	
	printf("Iki sayi giriniz...\n");
	
	scanf("%d%d",&sayi1,&sayi2);
	
	int *p_sayi1, *p_sayi2, *ara_deger;
	
	p_sayi1 = &sayi1;
	
	p_sayi2 = &sayi2;
	
	ara_deger = p_sayi1;
	
	p_sayi1 = p_sayi2;
	
	p_sayi2 = ara_deger;
	
	printf("Ilk girilen sayi: %d\nIkinci girilen sayi: %d\n",sayi1,sayi2);
	
	printf("Yerlerinin degismis hali...\n");
	
	printf("1. sayi: %d\n2 . sayi: %d",*p_sayi1 ,*p_sayi2);
	
	
	return 0;
}
