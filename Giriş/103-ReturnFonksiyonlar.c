//BOS OLMAYAN FONKSYONLAR

/* fonk_tipi fonk_adi(parametre_tipi parametre)
{
	islemler;
	
	
	return sonuc;
}

seklinde olurlar fonk_tipi ne ise geri dondurme(return) tipide o olur. Her fonksiyonun da parametresi
ve tipi olmak zorunda degildir. Bosta olabilir.
*/

/*
#include <stdio.h>

int topla(int x, int y)
{
	
	return x+y; // veya sonuc adli bir degisken tanimlayip oylede yapabilirdik ama boylesi daha kisa
}

int main()
{
	int a,b;
	
	printf("Toplanacak 2 deger giriniz: ");
	
	scanf("%d %d",&a,&b);
	
	printf("\nToplam = %d\n",topla(a,b));
	
	getch();
}

*/

/*
#include <stdio.h>

int carp();

int main ()
{
	int a,b;
	
	printf("Carpilacak 2 sayi giriniz...\n");
	
	scanf("%d %d",&a, &b);
	
	printf("Carpim sonucu: %d",carp(a,b));
	
	return 0;
}

int carp(int x, int y)
{
	int sonuc= x * y;
	
	
	return sonuc;// sonuc tanimlamadan yaparsak return x * y;
}

*/

/*

#include <stdio.h>

int n_toplam(int sayi)
{
	int i,toplam = 0;
	
	
	for (i=0; i<=sayi; i++)
	{
		toplam +=i;
	}
	
	return toplam;
}

int main()
{
	int sayi;
	
	printf("Bir sayi giriniz..\n");
	
	scanf("%d",&sayi);
	
	printf("0 ile %d arasindaki sayilarin toplami: %d",sayi,n_toplam(sayi));

	return 0;
}

*/

#include <stdio.h>

int faktoriyel(int sayi)
{
	int i, sonuc = 1;
	/*
	for (i=1; i<=sayi; i++)
	{
		sonuc *= i;
	}
	*/
	
	if(sayi != 1)
	{
		sonuc=(sayi) * faktoriyel(sayi-1); 
	}
	return sonuc;
}

int main()
{
	int sayi;
	
	printf("Faktoriyeli hesaplanacak sayiyi giriniz...\n");
	
	scanf("%d",&sayi);
	
	printf("Faktoriyel: %d",faktoriyel(sayi));
	
	return 0;
}





















