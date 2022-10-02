// COK BOYUTLU DIZILER

#include <stdio.h>

int main()
{

/* 
cok boyutlu diziler yada diger adiyla matrislerdir.
Bellekte ard arda siralanmis satir ve sutunlardan olusan yapiya iki boyutlu dizi veya 
matris denir.

1  2  3  4   Yandaki matriste 3 satir ve 4 sutun bulunmaktadir.Bunun bellekte halini soyle dusunebiliriz
5  6  7  8	 4 elemanli 3 vektorun (tek boyutlu) olusturdugu yapi seklinde dusunebiliriz.
9 10  11 12	  {1,2,3,4},{5,6,7,8},{9,10,11,12} gibi bellekte konumlanmistir.

Kac satir ve sutundan olusuyorsa satir ve sutunlarinin carpimi kadar eleman icermektedir.
Yani 2x2 bir matriste 2 satir ve 2 sutun oldugu icin 4 eleman icermektedir.Mantik boyle.

	1 2 3 	
 A= 4 5 6	matrisi icin programda indisleri soyledir:  
 	7 8 9	
			1= a00 (0.satir indisi, 0.sutun indisi)
			2= a01 (0.satir, 1.sutun)
			3= a02 (0.satir, 2.sutun)
			4= a10 (1.satir, 0.sutun)
			5= a11 (1.satir, 1.sutun)
			6= a12 (1.satir, 2.sutun)
			7= a20 (2.satir, 0.sutun)
			8= a21 (2.satir, 1.sutun)
			9= a22 (2.satir, 2.sutun)  
			seklinde isimlendiriliyor.Daha buyuk matrisler icin de gecerli.
			
			
A matrisinin programla tanimlayalim..

int A[3][3]={{1,2,3,},{4,5,6},{7,8,9}} seklinde tanimlanabilir.Bunun gibi suslu parantezle taminlayip
boyut belirtmeyebilirdik.(Boyut belirtmeme C'de gecerli) yada uzun uzun tek tek tanimlayabilirdik.

ornegin: int A[3][3];
		 A[0][0]=1;
		 A[0][1]=2;
		 A[0][2]=3;
		 A[1][0]=4;
			..
			..
			..		bu sekilede de tanimlanabilir.Tabi bunu kullanmak ne kadar mantikli?  */

	int matris[2][2]={{3,4},{5,6}};//{3,4}=0.satir, {5,6}=1.satir, kumenin ici de sutun sayisi

	
	printf("%d\n", matris[0][1]);// cikti4 
	printf("%d\n", matris[1][1]*3);
	printf("%d\n", matris[1][0]+matris[0][0]);// printf icinde de boyle islemler yapilabilir.
	
	return 0;
}
