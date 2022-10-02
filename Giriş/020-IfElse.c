/* KONTROL YAPILARI(KOSULLU IFADELER), IF-ELSE-ELSE IF YAPILARINA GIRISf

bunlar program iciresinde iki farkli sekilde calisiyor dogru(true,1) ve yanlis(false,0)
dogru ise if'e yanlis ise else giriyor

bool veri yada mantik olarakta gecmektedir 
*/

#include <stdio.h>


int main()
{
	/* ornek: 50 ustu puan alinirsa dersten gecilsin 50 alti alinirsa dersten kalinsin*/
	
	int puan;
	
	printf("Puaninizi giriniz:\n");
	scanf("%d", &puan);
	
	
	if(puan > 50)// int main gibi if, else icin suslu parentez aciyoruz
{
	printf("dersten gectiniz.\n");
}
	else//suslu paranteze dikkat
	{
		printf("dersten kaldiniz.");
	}
	
	return 0;
}//burada basit bi ornek isledik daha karmisiklari bundan sonra gelecek



