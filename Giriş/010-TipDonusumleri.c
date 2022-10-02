//Tip Donusumleri
#include <stdio.h>

void main()
{
	/*iki tane tur donusumu vardir.
	
	1)Otomatik donusum:
	herhangi aritmatik ifade de tipler farkli ise tip donusumu otomatik 
	olarak uygulanabilir.
	ornegin: 6.4/4 dedigimiz zaman float ve integer beraber bir arada 
	duruyor. Burada sonuc 1.6 olacaktir.cunku otomatik bir donusum
	yapiliyor.Yani 4 sayisi otomatikmen integerden floata cevriliyor.
	bu da 4.0 anlamina geliyor 
	Ama bu otomatik donusumun bir siralamasi var.
	
	Char--->Integer--->Float--->Double--->long double
	soldan saga dogru hassasiyet artiyor veya soldan saga dogru 
	kucukten buyuge siralama olarakta dusunulebilir.
	***mesela int ile double  beraberse double'a cevrilir.
	yukarida goruldugu gibi saga dogru oncelik artmaktadir.
	
	2)Manuel donusum:
	otomatik donusum olmadigi yerde manuel olarak biz donustururuz.
	ornegin:5.6 sayisini int yapmak istersek--->(int)5.6--->5
	sonucunu verir.kesirli kismi atar.*/
	
	int x = 7;
	float y = 0.2;
	
	printf("%.2f\n", x/y);// .2 ifadesi virgulden sonra iki bas. goster
	
	printf("%.3f\n", 16.5/2);// 2 floata cevrilir 
	
	printf("%3f\n", 4 * 5.3 + 16%3);
	
	printf("%d\n", (int) 6.6);/*goruldugu gibi float bir sayiyi int'e 
	cevirdik %d yazdik int old. icin buna dikkat!!*/
	
	printf("%f\n", (float)7);//burada da int'i floata cevirdik
	
	printf("%f\n", (double)5);// int'i double cevirdik 


	printf("\n\n");
	
	
	
	int a = 90;
	float b = 30;
	double c = 15;
	
	printf("int/float %f\n", a/b);
	
	printf("int/double %f\n", a/c);
	
	printf("int/float %d\n", a/(int)b);/* burada b'nin basina int yazmaz isek
	cevap sifir cunku b float cinsinden ama sen int cinsinden istiyorsun(%d)
	o yuzden yazdik*/
	
	printf("int/double %d\n", a/(int)c);
	
	printf("float/double %f\n", b/c);
	
	
	printf("\n\n");
	
	
	int T = 5;
	printf("%.2f\n", (float)T);	
}
