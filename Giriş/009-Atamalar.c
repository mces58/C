/*ATAMALAR*/
#include <stdio.h>

int main()
{
	int x = 5;
	int y = 7;
	int a = 2;
		
	x = y; /*y'nin degeri x'e atanir*/
	y = x +a +1; /*x'in degeri + a'nin degeri + 1 y'ye atanir*/
	printf("x:%d\ny:%d\na:%d\n\n", x,y,a); /*sonuc x=7 y=7+2+1=10 olur*/
	
	x=4;
	y=5;
	a=6;
	printf("x:%d\ny:%d\na:%d\n\n", --x,++y,a++); 
	/* x'in basinda -- var bu ifade ekrana x'in degerini
	bir azaltarak yazar.y'nin basinda ++ var bu ifade ekrana y'nin degerini bir artirarak yazar.
	a'nin sonunda ise ++ var bu ifade ise ekrana a suan ki degerini yazar yani artiirma yapmaz ama bundan
	sonraki satirlarda onun artirilmis seklini alir  x=3 y=6 a=6*/
	
	printf("x:%d\ny:%d\na:%d\n\n", x,y,a); /*bu ifade ekrana x=3 y=6 a=7 yazar*/
	
	
	x = y = a+4;
	printf("x:%d\ny:%d\na:%d\n", x,y,a);
	/* buna da icice atama denir. burada ise sonuc a=7 x=y=11 cikmali
	DEGERLER KENDINDEN BIR oNCEKI PRINTF'LERDE NE ISE O PRINTF'LERDE DE O DEGERLER ALINIR YANI HER PRINTF
	ICIN ILK BASTAKI ATADIGIMIZ DEGERLER ALINIR*/	
}
