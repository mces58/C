/* GOSTERICILERDE MATEMATIKSEL ISLEMLER

Degiskenler uzerinde islem yaptigimiz gibi pointerlar uzerinde de islemler yapabiliriz.	

bunlar sinavda soru olarak gelebilir.mesela bir adres verir baska bir adresi bulmamizi istenebilir.

bizim asagida yaptigimiz hexdec. sayiyarda yani 1,2,3,4,5,6,7,8,9,10(a),11(b),12(c),13(d),14(e),15(f)

10 dan buyugu harf ile gosterilir ona dikkat et islemlerde
*/

#include <stdio.h>

int main()
{
	// int veri 4byt oldugu icin adreslerde 4 er fark olmali
		
	int sayi = 5;
	
	int *p_sayi;
	
	p_sayi = &sayi;
	
	printf("%x\n",p_sayi);//62fe14
	
	p_sayi++;
	
	printf("%x\n",p_sayi);//62fe18
	
	p_sayi++;
	
	printf("%x\n",p_sayi);//62fe1c
	
	p_sayi ++;
	
	printf("%x\n",p_sayi);// 62fe20
	
	p_sayi +=8;
	
	printf("%x\n",p_sayi);// 62fe40
	 	
	p_sayi -= 5;
	
	printf("%x",p_sayi);// 62fe2c

	return 0;
}
// carpma ve bolme olmadi yani pointerler uzerinde islem  yapmak ne ise yariyor tam anlamadim..
	
