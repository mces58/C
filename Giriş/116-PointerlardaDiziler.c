// POINTERLARDA DIZILER

#include <stdio.h>

int main()
{
	
	int i,dizi[]={3,7,9,6,0};
	
	int *p_dizi;
	
	p_dizi = &dizi[0];// burada ki pointera dizinin 1. elemanin adresini atadik
	
	printf("dizinin 1. elemani : %d\n",dizi[0]);
	
	printf("dizinin 1. elemani : %d\n",*p_dizi);// burada ise dizinin 1. elemanin degerini bastirdik
	
	/* yukarida dizinin ilk elemanini gosterdik ve ilk elemani gosterirken pek bu kullanilmaz cunku 
	dizinin adi ayni zaman da o dizide ki ilk elemanin adresini de tutmaktadir yani ilk elemani gostermek
	icin dizinin adini yazmak yeterlidir.*/
	
	p_dizi = dizi;// p_dizi = dizi; ===> p_dizi = dizi[0];
	
	printf("dizinin 1. elemani : %d\n",*p_dizi);
	
	// yukarisi dizinin ilk elemanini gostermek icindi. Simdi ikinci elemanini gosterelim.
	
	p_dizi = &dizi[1];
	
	printf("dizinin 2. elemani : %d\n",dizi[1]);// dizi kullanarak bastirdik
	
	printf("dizinin 2. elemani : %d\n",*p_dizi);
	
	p_dizi = dizi;
	
	printf("dizinin 2. elemani : %d\n",*(p_dizi+1)); /* *(p_dizi +1) yaptik yani *p_dizi de ne vardi
	
	dizinin 0. indisi vardi p_dizi +1 yaparak indisi 1 artirdik ve dizinin 1. indisini bastirdik. Parantez
	
	onemli  cunku *p_dizi + 1 yaparsan soyle olur 0. indisi 1 ile toplamis olur.
	*/
	
	printf("1. elemanin adresi: %p\n",p_dizi);//62fe00
	
	printf("2. elemanin adresi: %p\n\n",p_dizi+1);/*62fe04 int tipi oldugu icin 4byte yer kaplarlar
	
	1. indiste ki elemanin adresini bulurken +1 kullandigimiza dikkat + 1 demeseydik 
	0. indisle ayni adres cikacakti. parantez kullanarakta bulabilirdik (p_dizi+1)
	*/
	
	// simdide dizinin tum elemanlarini ve adreslerini yazalim
	
	for(i=0; i<5; i++)
	{
		printf("dizi(%d) elemani: %d -- adresi %p\n",i,*(p_dizi+i),p_dizi+i);
	}
		
	return 0;
}
