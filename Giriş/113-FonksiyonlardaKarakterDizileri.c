// FONKSIYONLARDA KARAKTER DIZILERI

/*
mesela dizi "can" olsun bunun bellekte ki durusu soyle 'c' 'a' 'n' seklinde ve dizinin bittigine dair

sonunda null ('\0') karakteri vardir.Bunu kendisi koyar. 

karakter dizilerinde (char) boyut belirlenmez.Yani

fonk._tipi fonk._adi(parametre_tipi parametre) fazladan boyut_tipi boyut demiyoruz

*/

/*
#include  <stdio.h>

int uzunluk_bul(char name[])
{
	int i,uzunluk = 0;
	
	for(i = 0 ; name[i] != '\0'; i++)
	{
		uzunluk++;
	}
	
	return uzunluk;
}
// yukarida karakter dizisinin uzunlugunu bulduk bunu strlen fonk. ile de yapabilirdik.


int main()
{
	
	char isim[]="can can afacan";
	
	printf("%d",uzunluk_bul(isim));
	
	return 0;
}
*/


#include <stdio.h>
#include <string.h>

void ters_cevir(char something[])
{
	int i = 0, uzunluk = 0;
	
	uzunluk = strlen(something);
	
	for (i = uzunluk; i >= 0; i--)
	{
		printf("%c",something[i-1]);// burada ki -1 konsolda bir bosluk biraktip yazmasini engellemek icin
	}
	
	//printf("%s",sttrev(something));//bu da tersine cevirir.
}

int main()
{
	char bir_seyler[50];
	
	printf("Bir seyler yazin...\n");
	
	gets(bir_seyler);
	
	ters_cevir(bir_seyler);
	
	return 0;
}
