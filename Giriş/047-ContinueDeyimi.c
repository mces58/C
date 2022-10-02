//CONTINUE DEYIMI

#include <stdio.h>

int main()
{
	int toplam =0 ;
	int i;
	
	// 10'a kadar olan cift sayilarin toplamini veren
	for (i = 0; i <= 10; i++)
	{
		if (i % 2 == 1)
		{
			continue;// continue burada tek sayi var ise altta ki islemleri yaptirmayip  bastaki for'a donduruyor ve for'un icinde i bir artip tekrar dongu devam ediyor.
		}
		
		toplam += i;
	}
	
	printf("toplam: %d", toplam);
	
	return 0;
}

// continue'nun while ile kullanimi

//#include <stdio.h>
//
//int main()
//{
//	
//	int toplam =0 ;
//	int i =0 ;
//	
//	while (i <= 10)
//	{
//		if (i % 2 == 1)
//		{
//			//i++;
//			continue;
//		}
//		
//		toplam += i;
//		i++;
//	}
//	
//	printf("toplam: %d", toplam);	
//	
//	return 0;
//}
/* burada kod calistiginda imlec yanip sonecek cunku i ==1 oldugunda if'e girecek continue ile basa donecek yani i 'nin degerinde artima olmayacak bu yuzden i hep 1 olacak 
program sonsuz donguye girecek lakin artirma iseminin yerini continue onune alirsak kod duzelecek*/

