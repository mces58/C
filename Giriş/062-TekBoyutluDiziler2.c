//ARRAY (DIZI) DEVAM

#include <stdio.h>
#include <math.h>

int main()
{
	// Burada diziyi boylede tanimlayabiliriz ama bu uzun yol kisaca kume parantezi ile dizinin elemanlarini yaz gec.
	int dizi[5];// int dizi[5] = {5, 73, 26, 43, 6};
	dizi[0] = 5;
	dizi[1] = 73;
	dizi[2] = 26;
	dizi[3] = 43;
	dizi[4] = 6;
	
	printf("%d\n", dizi[3]);
	
	// simdi de float tipinde bir dizi tanimlayalim
	
	float dizi1[3] = {24.43, 13.55, 3};
	
	printf("\n%.3f\n%.3f", dizi1[2], dizi1[1]);
	
	
	/* burada 3 elemanli dizi tanimladik ve kume parantezinin icene uc eleman girdik 
	lakin kume parantezinin icine tanimlanan sayi adedinden fazla girseydik o zaman 
	program uyari verecekti.*/
	
	
	int dizi2[] = {1, 2, 3, 4, 4,};
	/* burada dizinin eleman sayisini tanimlamadim bunun anlamni kume parantezine istedigim kadar sayi girebilirim
	lakin bu durum C'de gecerli diger diller de boyle bi ifade programda acikliga neden olacagi icin bu sekilde kullanilmiyor
	her turlu dizinin eleman sayisi belirtiliyor.*/
	printf("\n\n%d", dizi2[3]);
	
	
	int dizi3[5] = {43, 55};
	/* burada bes elemanli dizi tanimladik lakin 2 eleman girdik.Eger biz dizinin 2,3 ve 4. elemanlarindan
	herhangi birini ekranda bastirmak istedigimiz de sonuc otomatik olarak sifir olacaktir.*/
	printf("\n\n%d", dizi3[4]);
	
	
	int dizi4[3] = {21, 32, 4};
	/* burada dizinin 1. elemanini 32 olararak atadik sonradan programin ilerleyen kisimlarinda 1. elemanina 66 atamamimiz gerekti
	ve onu da asagidaki gibi atiyoruz.En son hangi atamayi yaparsak ekrana son atanan deger yazilir*/
	dizi4[1] = 66;
	dizi4[0] = dizi4[2] * 3;//dizinin 0. degeri 21 iken boyle bi atama ile yeni degeri 12 oldu.
	printf("\n\n%d\n%d\n\n", dizi4[1], dizi4[0]);
	
	
	// dizinin elemanlarini ekrana bastik
	int dizi5[6] = {33, 5, 78, 1, 42, -9};

	int a;
	
	for( a = 0; a < 6; a++)
	{
		printf("%d\n", dizi5[a]);
	}
	
	
	printf("\n\n");
	
	
	// burada dizinin elemanlarinin kokunu hesapladik
	int dizi6[4] = {32, 43, 54, 16};
	
	int i = 0;
	
	float kok;// yada kok degiskeni tanimlamayip direkt for'un icine printf("%f\n", sqrt(dizi6[i]); yazabilirdik.
	
	for (; i < 4; i++)
	{
		 kok = sqrt(dizi6[i]);
		 printf("%.3f\n", kok);		
	}
	
	return 0;
}
