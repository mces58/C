//SINAV SONUCLARINI HARF SISTEMINE DONUSTUREN PROGRAM

#include<stdio.h>
#include<stdlib.h>
void main()
{
int i=1;
int not;
int aa=0, ba=0, bb=0, cb=0, cc=0, dd=0, fd=0, ff=0, top=0;
printf("0 ILE 100 ARASINDA OGRENCI NOTLARINI GIRINIZ\nPROGRAMDAN CIKMAK ICIN 101 SAYISINI GIRINIZ");

while(i>0)
{
	printf("\n%d. ogrencinin notunu giriniz : ",i);
	scanf("%d",&not);
	
	if(not==101)break;
	
	else if (not <= 100 && not >= 90)	aa++;
	else if (not <= 89 && not >= 80)    ba++;
	else if (not <= 79 && not >= 70)    bb++;
	else if (not <= 69 && not >= 65)    cb++;
	else if (not <= 64 && not >= 60)    cc++;
	else if (not <= 59 && not >= 50)    dd++;
	else if (not <= 49 && not >= 30)    fd++;
	else if (not <=29 && not >= 0) 	    ff++;
	
	else 
	{
	printf("HATALI NOT GIRISIYAPTINIZ\n");
	i--;
	}
	i++;
}

system("cls"); //Ekrani temizler stdlib.h ile calisir

	printf("\n\nSINIFTA %d OGRENCI VAR\n", i-1);
		
	printf("\nAA ALAN OGRENCI SAYISI : %d", aa);
	printf("\nBA ALAN OGRENCI SAYISI : %d", ba);
	printf("\nBB ALAN OGRENCI SAYISI : %d", bb);
	printf("\nCB ALAN OGRENCI SAYISI : %d", cb);
	printf("\nCC ALAN OGRENCI SAYISI : %d", cc);
	printf("\nDD ALAN OGRENCI SAYISI : %d", dd);
	printf("\nFD ALAN OGRENCI SAYISI : %d", fd);
	printf("\nFF ALAN OGRENCI SAYISI : %d", ff);
	
	getch();
}
