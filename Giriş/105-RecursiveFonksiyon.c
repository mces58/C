// FONKSIYONLAR SONUC (OZYINEMELI[RECURSIVE] FONK.)
/*
ozyinelemeli fonk. kendi kendi cagiran fonksiyonlardir.Ýki turdur. Void ve return type olandir.

Void = Geriye donus tipi olmayan fonksiyonlardir.Bunu daha once anlattik.

Return type = Geriye deger donduren fonksiyonlardir. Ýste bunlarin tipi int, char, float, bool, struct olabilir.

ozyinelemeli fonk. fazlaca ram kullanirlar sikca kullanilmazlar.
*/

// Faktoriyel hesaplama

#include <stdio.h>

int faktoriyel(int sayi)                          
{                                                 
	
	if(sayi==1)
	{
		return 1;// else ile de yapabilirdik asagiyi 
	}
	
	return sayi * faktoriyel(sayi -1);
}
/*
yukarida gerceklesen olayi aciklayalim...

girilen sayi 5 olsun;

faktoriyel(5) esit mi 1'e diye bakiyor. Esit degil o zaman asagi inip sunu yaziyor

5 * faktoriyel(4); peki faktoriyel(4) biliyor muyuz? Hayir. Tekrar fonk. kendini cagiriyor.Ve soyle oluyor.


faktoriyel(4) esit mi 1'e diye bakiyor.Esit degil o zaman asagiya iniyor.

4 * faktoriyel(3); boyle devam ediyor.Ta ki 1 olana kadar.

faktoriyel(5) ==> 5 * faktoriyel(4)

faktoriyel(4) ==> 4 * faktoriyel(3)

faktoriyel(3) ==> 3 * faktoriyel(2)

faktoriyel(2) ==> 2 * faktoriyel(1)

faktoriyel(1) ==> 1 * faktoriyel(0)

faktoriyel(0) ==> return 1 yani 1'e esit oluyor.


*/


int main()
{
	int girilen_sayi,fakt;
	
	printf("Bir sayi giriniz...\n");
	
	scanf("%d",&girilen_sayi);
	
	fakt = faktoriyel(girilen_sayi);
	
	printf("%d sayisinin faktoriyeli: %d",girilen_sayi,fakt);
	
	return 0;
}
