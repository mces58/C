/*
Struct'lar birbirinden farkli tipteki yapilari bir araya getirerek bir cati altinda toplamamizi saglar.
ornegin bir kisinin kimlik bilgilerini dusunursek.Bunda kimlik no, ad, soyad, dogum yili, dogum yeri gibi
farkli tipte veriler var.Struct ile farkli tipleri bu yapida tutabiliriz.

Kullanimi;

main fonk. ustunde olmalidir ki struct yapisinin icidenki degiskenlere ulasmak icin


struct ad
{
	degisken tipi degisken adi;
	degisken tipi degisken adi;
	degisken tipi degisken adi;
	...

}; buraya struct cagirmak icin kisaltma isim konulabilir 

main icinde de nokta operatoru ile struct uzerinde islem yapabiliriz.

*/

#include <stdio.h>
#include <string.h>

struct kimlik_bilgileri
{
	char ad[20];// char ad[20]= "ahmet" boyle atamalar struct yapisinda pek tercih edilmez.
	
	char soyad[20];
	
	char dogum_yeri[20];
	
	double kimlik_no;
	
	int dogum_yili;

}k_bil,k_bil2;// k_bil3... diye artilabilir birden fazla kisiler icinde kullanilabilir


struct ogrenci_bilgileri
{
	char ad[20];
	
	char soyad[20];
	
	double okul_no;
	
	char bolum[20];
	
}ogreci1;

struct kitaplar
{
	char ad[20];
	
	char yazar[20];
	
	float fiyat;
	
}

ktp1 = {"beyaz atli","ahmet gunbay",23.45},// boyle struct'ta atamalar yapilabilir
ktp2 = {"mikrobiyota","ed young",26.99};// daha fazla girilecekse virgul konularak devam edilebilir



int main()
{
	k_bil.ad; // boyle yazarak main fonksiyonunda ad dizisine ulastim ,eristim .Tabi simdilik ici bos bir dizi
	
	k_bil.soyad; /* struct'ta kisaltma isim kullaniyorsan uzun ismi kullanamazsin yani k_bil diye bir kisaltma
	
	var iken kimlik_bilgilerini kullanamazsin
	
	kimlik_bilgileri.soyad; diye kullanim olmaz kisaltma yokken struct'in adini  kullanirsin
	*/

	//k_bil.dogum_yeri="ahmet"; stringlerde boyle bi atama yapilamaz.Peki atama nasil yapilir.
	
	strcpy(k_bil.ad ,"mehmetcan");// strcpy ile string ada mehmetcani kopyaladik
	
	strcpy(k_bil.soyad,"eser");
	
	strcpy(k_bil.dogum_yeri,"sivas");
	
	k_bil.kimlik_no= 15546215115;// string olmadigi icin normal atama yapabiliriz
	
	k_bil.dogum_yili = 2001;
	
	printf("ad         :%s\n",k_bil.ad);
	
	printf("soad       :%s\n",k_bil.soyad);
	
	printf("dogum yeri :%s\n",k_bil.dogum_yeri);
	
	printf("kimlik no  :%.lf\n",k_bil.kimlik_no);
	
	printf("dogum yili :%d\n",k_bil.dogum_yili);
	

	strcpy(k_bil2.ad ,"ayse");
	
	strcpy(k_bil2.soyad,"doruk");
	
	strcpy(k_bil2.dogum_yeri,"denizli");
	
	k_bil2.kimlik_no= 1111111111;
	
	k_bil2.dogum_yili = 1974;

	printf("\n\nad         :%s\n",k_bil2.ad);
	
	printf("soad       :%s\n",k_bil2.soyad);
	
	printf("dogum yeri :%s\n",k_bil2.dogum_yeri);
	
	printf("kimlik no  :%.lf\n",k_bil2.kimlik_no);
	
	printf("dogum yili :%d\n",k_bil2.dogum_yili);

	
	
	struct ogrenci_bilgileri ogrenci1 = {"selim","keser",19152425,"bilgisayar_muh"};
		
	printf("\n\n%s %s %.lf %s",ogrenci1.ad, ogrenci1.soyad, ogrenci1.okul_no, ogrenci1.bolum);
	
	/* boyle de tanimlama yapilabilir ayri ayri ugrasmaktansa burada dikkat edilecek yerler sunlar
	
	struct'ta tanimlanan ad kullanilir ve neye atacaksa o yazilir burada ogrenci1 e atandi
	
	Son olarak ise printf te atamalara atanan isim yazilir yukarda ogrenci1 e atamalar yapildi
	ve printf te ise o yazilir yani ogrenci1
	
	boylece ogrenci1 , ogrenci2, ogrenci3 ...diye sayilar artirilabilir.  
	
	*/
	
	
	printf("\n\nkitap adi: %s\nyazari: %s\nfiyati: %.2f\n",ktp1.ad, ktp1.yazar, ktp1.fiyat);	
	
	printf("\n\nkitap adi: %s\nyazari: %s\nfiyati: %.2f\n",ktp2.ad, ktp2.yazar, ktp2.fiyat);
	
	getch();
}


