// POINTER(GOSTERICILER, ISARETCIER)
/*
Degiskenler normalede bellekte depolanirlar.Ve her degiskenin de bellekte bir adresi bulunur.Degiskenlerde 
bellek adresine karsilik gelen alana depolanirlar.Ve bizde bu depolanan adrese ulasmak icin pointerlari 
kullaniyoruz.

Pointer = Programlama dillerinde bellek adreslerini saklayan degiskenlere verilen genel isimdir.
Bir programlama dilinde herhangi bir degiskeni tanimladiginizda hafizada ona bir yer ayrilir.
İsaretciler bu hafiza alanlarinin adreslerini tutarlar.

Pointer degiskenine istenilen bir ad verilebilir; ancak bu adin onune * simgesi konulur. Bir degiskenin
onune * simgesi konulunca derleyici onu pointer olarak algilar.Tanimlanmasi soyledir:

degiskenin_turu *degiskenin_adi; seklinde olur. 

int sayi = 5; tanimlayalim ----> degiskenin_adi = sayi , degeri = 5 , bellekteki_adresi = 0x12ff25'tir.

printf("Degiskenin degeri: %d\n", sayi); dedigimizde ekrana sadece 5'i basar.

printf("Adresi: %p",&sayi); ekrana 5 degerinin bellekte ki adresini basar. Burada & operatoru onemli

mantigi scanf("%d",&sayi) ile ayni & operatoru burada adres tutarken yukarida da adresine ulasiyoruz .

pointer'larda iki operator onemli * ve & .


int sayi1 = 5;

int *p1; // burada bir p1 adinda pointer tanimladik.

p1 = &sayi;// burada da sayi degiskeninin bellekte ki adresini p1'e atadik.

int sayi2 = *p1; // burada ise p1'de ki adresi sayi2'ye atadik yani soyle oldu deponan adresi(p1) sayi2'ye

atadik.Peki depolanan adres kimin adresi idi.5'in adresi idi yani biz adresi kullanarak sayi2 degiskenine

5'i atamis olduk.

printf("%d\n", sayi1); ----> ekranda 5 yazar.

printf("%p\n", p1); ----> ekranda 5'in adresi yazar.

printf("%d\n", sayi2); ----> ekranda yine 5 yazar.


.                                    oZET

& operatoru degiskenin adresini verir,

* operatoru isaret edilen adresteki degeri verir ve degiskenin onunde kullanara pointer old. belirleriz.

*/

#include <stdio.h>

int main ()
{
	/*
	int sayi = 7;
	
	printf("%d\n",sayi);// ekrana 7'yi basar
	
	printf("%p\n",&sayi);// ekrana 7'nin adresini basar.
	
	printf("%x",&sayi);// ekrana 7'nin hexadec. degerini basar.Yani sifirlari basmaz.
	
	*/
// Yukarida pointer kullanmadan & op.ile adresi ekrana bastirdik.Simdi de pointer kullanarak adresi gosterelim

	/*
	int sayi = 8;
	
	int *ptr;
	
	ptr = &sayi;
	
	printf("%d\n", *ptr);
	
	printf("%p\n", ptr);
	
	printf("%x", ptr);
	
	*/
	
// asagida yazilan ise 27-43 arasinda ki satirlara ornek

	/*
	int sayi1 = 10;
	
	int *ptr;
	
	ptr = &sayi1;
	
	int sayi2 = *ptr;
	 	
	printf("%d\n",*ptr);// * pointer deger gosterir

	printf("%p\n",ptr);
	
	printf("%d",*ptr);// * pointer degeri gosterir demistik

// yukari da yaptigimiz sey 10 sayisinin adresini kullanarak sayi2 'de 10'a esitlemis olduk.

	*/
	
//v buraya kadar tek bir pointer uzerinde calistik.Simdi birden fazlasina bakalim
	
		
	int sayi = 5;
	
	char karakter = 'A';
	
	float ondalik = 58.5;
	
	int *p_sayi;//sayi icin pointer tanimladik
	
	char *p_karakter;// karakter icin pointer tanimladik
	
	float *p_ondalik;// ondalik icin pointer tanimladik
	
	
	
	p_sayi = &sayi;// sayinin adresini & op. sayesinde pointer'a atadik
	
	p_karakter = &karakter;// karakterin adresini & op. sayesinde pointer'a atadik
	
	p_ondalik = &ondalik;// ondaligin adresini & op. sayesinde pointer'a atadik
	
	
	
	printf("%d sayisinin adresi: %p %x\n\n",sayi,p_sayi, p_sayi); // sayinin adresini bastirdik
	
	printf("%c karakterinin adresi: %p %x\n\n",karakter,p_karakter, p_karakter);//karakterin adresini bastik
	
	printf("%.2f ondaliginin adresi: %p %x",ondalik,p_ondalik, p_ondalik);// ondaligin adresini bastirdik
	 
	return 0;
} 
