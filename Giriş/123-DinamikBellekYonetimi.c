// DINAMIK BELLEK YONETIMI

/*
Bir C programi icerisinde, dizilerin boyutu ve kac elemanli oldugu
program basinda belirtilirse, derleyici o dizi icin gereken bellek
alanini (bolgesini) program sonlanincaya kadar sakli tutar ve bu
alan baska bir amac icin kullanilamaz.

Bu turden diziler statik dizi olarak isimlendirilir.

Statik dizinin boyutu programin calismasi esnasinda (run time)
degistirilemez.

Fakat, programin calisirken bir dizinin boyutu ve eleman sayisi
bazi yontemler kullanilarak degistirilebilir. Bu tur dizilere dinamik
dizi denir.

Dinamik diziler icin gereken bellek bolgesi, derleyici tarafindan
isletim sisteminden istenir, kullanilir ve daha sonra istenirse bu
bolge bosaltilir.

void *malloc(size_t eleman_sayisi);

bellekte her bir size_t tipinde olan eleman_sayisi kadar yer(bellek 
boslugu) ayirir.Bu yer verilmezse geriye NULL gonderir.onceki verileri 
sifirlamaz.

void *calloc(size_t eleman_sayisi, size_tnbayt)

bellekte her biri nbayt kadar yer isgal edecek eleman_sayisi kadar bos
yer ayirir ve butun bitleri sifirlar.Bu yer verilmezse geriye NULL gonderir
onceki verileri sifirlar

void *realloc(void *ptr,size_t nbayt)

ptr isaretcisi ile gosterilen bellek blogu nbayt kadar buyuterek veys 
kucuterek degistirir.bu yer verilmezse NULL gonderir
 
void free(void *ptr) 

daha once ayrilan adresi ptr'de saklanan bellek alaninin
bosaltilir

stdlib kutuphanesinde olurlar

*/

/*
#include<stdio.h>
#include<stdlib.h>

void main( ) 
{
// Dinamik bir dizi yaratmak icin pointer kullaniriz.

int *dizi;

// Dizimizin kac elemanli olacagini eleman_sayisi isimli degiskende tutuyoruz.

int eleman_sayisi;

int i;

// Kullanicidan eleman sayisini girmesini istiyoruz.

printf( "Eleman sayisini giriniz> ");

scanf( "%d", &eleman_sayisi );

// calloc( ) fonksiyonuyla dinamik olarak dizimizi istedigimiz boyutta yaratiyoruz.

dizi = calloc( eleman_sayisi, sizeof( int ) );

// Ornek olmasi acisindan dizinin elemanlarini ekrana yazdiriliyor.

//Dizilerde yapabildiginiz her seyi hicbir fark olmaksizin yapabilirsiniz.

for( i = 0; i < eleman_sayisi; i++ ) 

printf( "%d\n", dizi[i] );

// Dinamik olan diziyi kullandiktan ve isinizi tamamladiktan sonra free fonksiyonunu

// kullanip hafizadan temizlemelisiniz.
free( dizi );

getch();
} 

*/
/*
calloc( ) fonksiyonu eleman sayisini, eleman
boyutuyla carparak hafizada gereken bellek
alanini ayirir.

Dinamik olusturdugunuz dizi icerisindeki her
elemana, otomatik olarak ilk deger 0 atanir.

malloc( ) fonksiyonu, calloc( ) gibi dinamik
bellek ayrimi icin kullanilir.

calloc( ) fonksiyonundan farkli olarak ilk deger
atamasi yapmaz

calloc arada virgul var mallocta yok

*/

#include<stdio.h>
#include<stdlib.h>

int *dizileri_birlestir( int [], int, int [], int );

void main()
{

	int i;
	
	// liste_1, 5 elemanli bir dizidir.
	
	int liste_1[5] = { 6, 7, 8, 9, 10 };
	
	// liste_2, 7 elemanli bir dizidir.
	
	int liste_2[7] = {13, 7, 12, 9, 7, 1, 14 };
	
	// sonuclarin toplanacagi toplam_sonuc dizisi
	
	// sonucun dondurulmesi icin pointer tanimliyoruz
	
	int *ptr;
	
	// fonksiyonu calistiriyoruz.
	
	ptr = dizileri_birlestir( liste_1, 5, liste_2, 7 );
	
	// ptr isimli pointer'i bir dizi olarak dusunebiliriz
	
	for( i = 0; i < 12; i++ )
	
	printf("%d ", ptr[i] );
	
	printf("\n");
	
	getch();
}

int *dizileri_birlestir( int dizi_1[], int boyut_1, int dizi_2[], int boyut_2 )
{

int *sonuc = calloc( boyut_1+boyut_2, sizeof(int) );

int i, k;

// Birinci dizinin degerleri ataniyor.

for( i = 0; i < boyut_1; i++ )

sonuc[i] = dizi_1[i];

// Ikinci dizinin degerleri ataniyor.

for( k = 0; k < boyut_2; i++, k++ ) 
{
	sonuc[i] = dizi_2[k];
}

// Geriye sonuc dizisi gonderiliyor.

return sonuc;
}
