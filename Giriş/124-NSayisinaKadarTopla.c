#include<stdio.h>

int toplam()
{
	int i=0,toplam =0;
	
	int sayi;
	
	printf("bir sayi giriniz..\n");
	
	scanf("%d", &sayi);
		
	for(; i <= sayi; i++)
	{
		toplam +=i;
		
	}
	
	return toplam;
}
int main()
{
	
	printf("toplam : %d",toplam());
				
	return 0;
}
