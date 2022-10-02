// FONKSIYONLARA GENEL GIRIS
/*
Fonksiyonlar buyuk programlari daha kolay, daha iyi anlasilir bir sekilde yazmamizda yardimci olurlar.
ornegin 2000 satirlik bir kodu sadece in main bloguna yazmak cok saglikli degildir.Sadece 
int main'nin icine yazilmasi programin anlasilmasini zorlastirir program uzerinde degisikliklerde
zorluklar yasanabilir vb gibi durumlar yasanabilir.Bu yuzden buyuk programlari parcalara ayirmak 
en mantiklisidir.Bu parcalara ayirma isleminde fonksiyonlar isimize fazlasiyla yararlar.
Yani genel kullanim amaclari bu dogrultudadirlar.

Fonksiyonlarin Yapisi:

Programlarda kullandigimiz fonksiyonlar aslinda matematikteki fonksiyonlardan gelmektedir.

ornegin f(x,y)= x^2 + xy+ y^2 seklinde bir fonksiyonumuz olsun.

Bu fonksiyonun adi f'tir.Parametreleri(degiskenleri) x ve y'dir.Biz x ve y'ye deger girdimizde ise 
fonksiyonun girmis oldugumuz sayilar icin degerine ulasiriz.Tabi girdigimiz sayilara gore biz sonucun
tam sayisi mi, reel sayi mi yoksa kompleks sayi mi cikacagini onceden tahmin edebiliriz.Ama bunu bilgisayar
ortamina tasidigimiz zaman derleyiciye bunlarin tiplerini tanimlamamiz gerekir.Bu yuzden yukarada fonksiyona
bir kac sey daha ekleyip bunu bilgisayar ortaminda tanimlamis oluruz.


Donus_Tipi  Fonksiyonun_adi (tip parametre, tip parametre)
{			...
.			iolemler
.		    ...
	
	return;
}

Genel kalip yukaridaki gibidir.

Normal() parantez kullanimi onun bir fonksiyon oldugu anlamina gelir
ornegin;
printf(), scanf(), for(), yada bizim olusturdugumuz fonksiyonlar olabilir.

simdide fonksiyonu programin neresine(hangi bolumune) yazagimiza bakalim :

C'nin akis yonu yukaridan asagiya dogrudur.Bu yuzden tanimlamalarin yeri onemlidir.


Fonksiyonlari ister int main'den once tanimlariz istersekde int main'den sonra tanimlariz.Ama saglikli olani 
int main'den sonra tanimlanmasidir.Bunu gosterecek olursak ufak bir ayrintisi vardir.

#include <stdio.h>

void fonksiyon();    int main'den once burada bir fonk. sadece tanimladik.Yani int main'e boyle bir fonksiyon
int main()           oldugunu bildirdik.Ama fonksiyonun icinde herhangi bir islem yapmadik.int main'den sonra
{                    ise fonksiyonun uzerinde gerekli islemleri yapiyoruz.
	fonksiyon();     onemli bir kisim daha var burada:
	return 0;        Eger fonksiyon tipi void ise parametrelerin tipini belirtmiyoruz.
}                    Ama fonksiyon tipi int, char... ise parametrelerin tipini belirtiyoruz.ornegin:
                                      	  
.									  #include <stdio.h>  
void fonksiyon()                      
.									  int fonksiyon(int);
{                                  
	islemler;                         int main()
	return;                           {                         
}                                        fonksiyon();
.                                        return 0;
.                                     }
.                                                                               
.                                      int fonksiyon(int parametre)
.									  {
.									  	islemler;
.									  	return;  
.                                     }                                                 
*/
