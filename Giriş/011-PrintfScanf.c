// PRINTF(CIKIS) VE SCANF(GIRIS) FONKSIYONLARI
/* integer bir deger olan z'yi ekrana bastirmak icin -->
printf("%d",z); yapiyorduk.
artik kullanicidan bir deger almak istiyorsak bunu 
scanf fonsiyonu ile yapacagiz.
integer olan bir z tanimlayip daha sonra degeri kullanican almak
istersek--> scanf("%d",&z); seklinde yapiyoruz.
&(ampersant) isareti z kullanican alinan degeri atamak i.in yaziyoruz
& yazmaz isek kullanicidan alinan deger degiskene atanmaz.
***scanf de kullanilan diger tip belirleyicileri printf ile ayni***
(%d, %f, %ld,...) bunlar  printf de ne amacla kullaniliyorsa 
scanf'te de ayni amacla kullaniliyor*/

#include <stdio.h>

int main()
{
	
	int a;/*burada degiskenleri int a,b,c,toplam,carpim,ortalama;seklinde de tanilayabilirdik*/
	int b;
	int c;
	
	printf("Lutfen 3 tane tam sayi giriniz:\n");
	scanf("%d %d %d",&a, &b, &c);
	
	int toplam = a+b+c;
	
	printf("toplam: %d\n", toplam);

	int carpim = a*b*c;
	
	printf("carpim: %d\n", carpim);
	
	int ortalama = toplam /3;// burada (a+b+c)/3 de kullanilabilirdi.
	
	printf("ortalama:%.3f\n", (float)ortalama);//burada sonucun float tipinden olmasini istedik
	/*toplam carpim ve ort. icin her defasinda printf yazmayada gerek yoktu.tek printf de yeterli olabilir
	ornegin: printf("toplam: %d\ncarpim: %d\nortalama: %d\n", toplam, carpim, ortalama);*/
	
	return 0;
}






 
 
