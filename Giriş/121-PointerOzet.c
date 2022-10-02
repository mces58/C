// POINTERLAR OZET

#include <stdio.h>

int main()
{
	
	
	// pointerlar deger tutmaz.Onlar degiskenlerin adreslerini tutarlar. peki basinda * olunca ne oluyor.
	// O ise tutulan adresteki degeri gosterir.olay bu
	/*
	int sayi = 11,k;
	int *p;
	
	p = &sayi;
	
	k = *p;
	
	printf("sayinin kendisi: %d\n",sayi);
	
	printf("pointer kullanmadan sayinin adresi: %p\n",&sayi);
	
	printf("pointer kullanarak sayinin adresi: %p\n",p);
	
	printf("pointerin tuttugu adresin degeri: %d\n",*p);
	
	printf("pointerin adresi: %p\n",&p);
	
	printf("k nin degeri: %d\n",k);
	
	printf("k nin adresi: %p\n",&k);
	
	printf("\n\n\n");
	
	*/
	/*
	
	int x = 5, y = 10, z;
	
	int *p_adres;
	
	p_adres = &x;// pointer x'in adresini aldi
	
	z = *p_adres;// z'ye x'in degerini atadik adres aracigili yani pointer ile
	
	printf("z: %d\n",z);
	
	p_adres = &y;// bu seferde pointerimiz y nin adresini aldi
	
	z = *p_adres;// burada da o adresiteki degeri * in yardimiyla z ye atadik.
	
	printf("z: %d\n",z);
	
	*/
	
	
	int sayi = 50, *p_sayi;
	
	p_sayi = &sayi;
	
	printf("sayinin degeri: %d\n",sayi);
	
	printf("sayinin adresi: %p\n",&sayi);
	
	printf("pointer kullanarak sayinin adresi: %p\n",p_sayi);
	
	printf("pointer kullanarak sayinin degeri: %d\n\n",*p_sayi);
	
	/*
	asagida onemli olan biz pointer sayesinde degiskenin degerini degistirebiliyor olabilmemizdir.
	
	Peki bu degistirme islemini pointer nasil yapti?
	
	*p_sayi nin gosterdigi icerinin degerini 100 ile degistirdi. 
	
	p_sayi gosterdigi yer neresiydi? 
	
	sayinin adresi. 
	
	peki *p_sayi ne gosteriyordu saynin degerini yani 50 yi.
	
	peki biz bu gosterdigi 100 esitlersek ne olur . 
	
	*p_sayi 100 u gosterir. 
	
	bu ne demek . bu da pointer kullanarak sayi adli degiskenin degerini degistirdik demektir.
	
	*/
	
	
	*p_sayi = 100;// bunun esiti ===> sayi = 100; ile ayni anlamdadir.
	
	printf("sayinin yeni degeri: %d\n",sayi);
	
	printf("pointer kullanarak sayinin yeni degeri: %d\n",*p_sayi);
	
	printf("int tipinde sayi adli degiskenin adres: %d\n",p_sayi);
	
	/* normalde %p ile adresi yazdiriyoduk %d ile bu adresi int tipide yazdirdik cunku %p ile yazilan 
	adresler hexdec. tipinde olur.*/
	
	printf("int tipinde pointerin adresi: %d\n",&p_sayi);// int tipinde pointerin adresi
	
	return 0;
}
