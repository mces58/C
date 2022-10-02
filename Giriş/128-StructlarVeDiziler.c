//STURCT'LARDA DIZILER 

#include <stdio.h>

struct telefon_rehberi
{
	char ad[20];
	
	char soyad[20];
	
	char sehir[20];
	
	double telefon_no;
	
	char kan_grubu[10];
	
}tel[3];


int main()
{
	
	int i;
	
	for (i=0; i < 3; i++)
	{
		printf("%d. isimi giriniz : ",i+1);
		
		scanf("%s",&tel[i].ad);
		
		printf("%s isimli kisinin soyadini giriniz : ",tel[i].ad);
		
		scanf("%s",&tel[i].soyad);
		
		printf("%s isimli kisinin hangi sehirli oldugunu giriniz : ",tel[i].ad);
		
		scanf("%s",tel[i].sehir);
		
		printf("%s isimli kisinin telefon numarasini giriniz : ",tel[i].ad);
		
		scanf("%lf",&tel[i].telefon_no);
		
		printf("%s isimli kisinin kan grubunu giriniz : ",tel[i].ad);
		
		scanf("%s",tel[i].kan_grubu);
		
		printf("\n");
	}
	
	system("cls");
	
	printf("\n\n\n\t\t\t----REHBERINIZ----\n\n\n");
	
	for(i=0; i< 3; i++)
	{

		printf("\t%s\t\t%s\t\t%s\t\t%s\t\t%.lf\t\t\n\n",tel[i].ad,tel[i].soyad,tel[i].sehir,tel[i].kan_grubu,tel[i].telefon_no);

	}

	return 0;
}
