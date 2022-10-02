// VOID MAIN (parametresiz)
/*
Void fonksiyonlari geriye deger dondurmeyen fonksiyonlardir.
Bu fonksiyonlar genelde bir mesaj icerirler veya kontrol amacli kullanilirlar.
 
void fonksiyonlari parametre alip geriye dondurmeyen ve 
void fonksiyonlari paremetre almayip geriye dondurmeyen olarak iki tiptir.
*/

/*
#include <stdio.h>

void mesaj();// fonksiyonu main'den once bildirdik

int main()
{
	
	mesaj();// void fonk. icin fonksiyonun adini yazmak yeterlidir.
	
	return 0;
}

void mesaj()//Burada da fonksiyonun islemlerini yaptik.
{
	printf("Merhaba Dunya");
}

*/

#include <stdio.h>

void mesaj()
{
	printf("Merhaba Dunya");
}

void sayi()
{
	int i;
	
	for ( i=0; i<10; i++)
	{
		printf("%d ",i);
	}
}

void satiratla()
{
	printf("\n");
}

int main()
{
	mesaj();
    satiratla();// mesela programlarda surekli olarak printf("\n") yazmamiza gerek yok fonk. cagir bitsin.
	sayi();
	
	return 0;

}
