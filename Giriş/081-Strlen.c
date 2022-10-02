// STRLEN FONKSIYONU 

/* bu fonksiyon karakter dizisinde kullanildigi icin programa string.h dahil etmek zorundayiz
yoksa calismaz

strlen fonksiyonu karakter dizilerinin karakter sayisini(uzunlugu) bulmada kullanilir. 

len=length'den gelmekte anlami uzunluk
*/

#include <stdio.h>
#include <string.h>

int main()
{
	
	char ad[]="can";// tanimlarken tek tirnak kullanmiyoruz
	
	int uzunluk;
	
	uzunluk = strlen(ad);
	
	printf("%d\n",uzunluk);
	
	// yukardaki gibi uzunluk tanimlayip karakter sayisini ona atayabiliriz.
	// ya da;
	
	printf("%d\n",strlen(ad));// boyle de kullanabiliriz.Dizinin adi yazacaz [] kulanmiyoruz tekrardan
	
	//veyahut;
	
	printf("%d\n\n",strlen("mehmetcan"));
	
	// seklinde de kullanabiliriz.Burada hic degisken tanimlamadik bile

	return 0;
}
