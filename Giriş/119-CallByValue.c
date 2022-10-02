//CALL BY VALUE KONU ANLATIMI

#include <stdio.h>

void yer_degistir(int a, int b)
{
	int gecici;
	
	gecici = a;
	
	a = b;
	
	b = gecici;
	
	printf("a: %d , b: %d\n",a,b);
}


int main ()
{
	int x = 5, y = 10;
	
	yer_degistir(x,y);
	
	printf("x: %d , y: %d",x,y);
	
	return 0;
}

/* simdi yukarida ki program calistiginda a ile b nin degerlerinin degistigini ama x ile y nin degerlerinin
yer degismedigini gorecegiz.bunun sebebi fonksiyondan kaynaklaniyor.

fonksiyon calistigi surece bellekte a ve b diye degiskenler olur ama fonksiyondan ciktigi anda o degerler
bellekten yok oluyor.yani yer_degistir fonk. calisti a ve b degerleri degisti fonk bitti o degerler yok oldu
ve o degerler x ve y nin degismesini saglamadi. x ile y degerlerinin degismemesinin nedeni biz fonksiyona
x ile y nin degerlerini gondermemizden dolayi egerki biz fonksiyona x ile y nin degerlerini degilde adreslerini
gonderseydik o zaman x ile y nin degeri degisecekti.Boyle adres gondermeye de Call by refence denir.

*/
