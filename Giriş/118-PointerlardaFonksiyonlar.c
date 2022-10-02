//POINTERLARDA FONKSIYONLAR

#include <stdio.h>

void mesaj(int *a)
{
	int i=0;
	
	for(; i < *a; i++)
	{
		printf("%d - Selam canim..\n",i);
	}
}

int carp (int *a, int *b)
{
	return *a * (*b);// carpma ile pointeri karistirmamak icin parantez kullandik
	
}

int faktoriyel(int *sayi)
{
	int i,sonuc =1;

	for(i = *sayi; i > 1; i--)
	{
		sonuc *= i;
	}
	
	return sonuc;
	
}


int main()
{
	/*
	int sayi;
	
	printf("bir sayi giriniz..\n");
	scanf("%d",&sayi);
	
	mesaj(&sayi);
	
	*/
	
	/*
	int x,y,sonuc;
	
	printf("iki sayi giriniz..\n");
	
	scanf("%d%d",&x,&y);
	
	sonuc= carp(&x,&y);
	
	printf("sonuc: %d",sonuc);
	
	*/
	
	int sayi;
	
	printf("bir sayi giriniz..\n");

	scanf("%d",&sayi);
	
	printf("faktoriyel: %d",faktoriyel(&sayi));


	return 0;
}
