// RANDOM SAYI URETME KONU ANLATIMI

/*
C Dilinde Rastgele Sayi uretmek icin  rand(); fonksiyonu kullanilir.
Bunun icinde <stdlib.h> kutuphanesi tanimlamak gerekir fakat asil sorun her defasinda ayni
sayiyi uretmesi yada belli bir aralikta sayi uretme sorunudur.Bunlari tek tek ele alacagiz 
once rastgele sayi ureticez daha sonra 0 ile bir sayi arasinda sayi ureticez en sonundada istedigimiz
iki sayi arasinda bir sayi uretip konuyu bitirecegiz.*/

/*
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

int rastgele; 
rastgele=rand();

printf("%d",rastgele);

return 0;

}

*/

/*
Yukaridaki kod blogunda kutuphaneleri tanimladiktan sonra rand fonksiyonuile rastgele sayi
uretip ekrana yazdirdik fakat bu sayi icin herhangi bir aralik kullanmadik.
simdide 0 ile 25 arasinda rastgele sayi ureten kodu yazalim.

*/

/*

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

int rastgele; 

rastgele=rand()%25;

printf("%d",rastgele);

return 0;

}

*/

/*
Bir onceki kodtan tek farki rand fonksiyonu % ile istedigimiz araliga getirdik tabi ki 
bu aralik bu kod icin 0 ile 25 arasinda  bu sadece 0 dan istedigimiz bir sayiya kadar 
rastgele uretir bunu 5 ile 25 arasinda rastgele sayi uretmek icin kullanalim.

*/

/*

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

int rastgele; 

rastgele=5+rand()%20;

printf("%d",rastgele);

return 0;

}

*/

/*
simdi ele alacagimiz bu yapi 5 ile 25 arasinda sayi uretiyor ustte ki mantigi anladiysaniz 
bu kisim cok daha basit rand()%20 ifadesi 0 ile 20 arasinda sayi uretiyor bu uretilen sayiyida 
onundeki 5 ile topluyoruz mantigi bu hangi sayi uretilirse 5 ekliyor 0 uretse sayi 5 oluyor 
15 uretse 20 oluyor fakat en onemli kisim yazdigimiz tum bu kodlar programi kac kere 
calistirirsaniz calistirin ayni sayiyi uretiyor her defasinda farkli sayi uretmek icinde 
asagidaki kod blogunu kullaniyoruz.

*/



#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

int rastgele;

srand(time(NULL)); 

rastgele=5+rand()%25;

printf("%d",rastgele);

return 0;

}

/*
Yukaridaki yeni bir kutuphane olan <time.h> kutuphanesini ekleyerek 
srand(time(NULL)); bu kod satirini ekledigimizde program her defasinda 
farkli bir sayiyi uretmis olacaktir.

*/
