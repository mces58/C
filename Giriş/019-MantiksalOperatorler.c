/* 
MANTIKSAL OPERATORLER VE ILISKISEL OPERATORLER
Sifir harici olan tum sayilar true olarak  dondurulur.
Sifiri ise false olarak dondurulur.

Ýliskisel Operatorler

Ýliskisel islec iki islenen arasindaki iliskiyi denetler. Ýliski dogruysa,
1 dondurulur; ilski yanlis ise, 0 degerini dondurur.

Ýliskisel operatorler karar verme ve donggulerde kullanilirlar.

  Operator     Anlami           ornek
    ==        cift esttir       5 == 3   degeri: 0
    >         buyuktur          5 > 3    degeri: 1
    <         kcuktur           5 < 3    degeri: 0
    !=        esit degildir     5 != 3   degeri: 1
    >=        buyuk esittir     5 >= 3   degeri: 1
    <=        kucuk esittir     5 <= 3   degeri: 0
*/
  
    
/*   Mantiksal Operatorler

Mantiksal isleci iceren bir ifade, ifadenin dogru mu yanlis mi olduguna 
bagli olarak 0 veya 1 dondurur.(bildigimiz mantik iste)

Mantiksal operatorler C'de karar vermede yaygin olarak kullanilir.

Operator      Anlami
&& --->       VE(and) anlamindadir. Her iki kosulun da dogruya dogru olmasi gerekir

|| --->       VEYA(or) anlamindadir. Bir kosulun dogru olmai yeterlidir.

! --->        DEGILI(not) anlamindadir. Dogru ise degili yanlis, yanlis ise 
         	  degili dogrudur.    
*/
              
              
/* 
	int a = 4;
	int b = 5;
	int c = 6;
	int d = 7:
	
	a > c && c && (a > b || b < d);
	bu ifade sifira esittir.
	
	
	!(a >= d);
	bu ifadenin esiti birdir.
*/
   
#include <stdio.h>
   
int main()
{
   
  int a = 10 , b = 10 , c = 20 , sonuc;
  
  sonuc = (a == b) || (c < b);
  printf("(a == b) || (c < b) ise sonuc: %d \n", sonuc);
  
  sonuc = (a != b) || (c < b);
  printf("(a != b) || (c < b) ise sonuc: %d \n", sonuc);
  
  sonuc = !(a != b);
  printf("!(a != b) ise sonuc: %d \n", sonuc);
  
  sonuc = !(a == b);
  printf("!(a == b) ise sonuc: %d \n", sonuc);
   
   
   return 0;
}
   
   
   









