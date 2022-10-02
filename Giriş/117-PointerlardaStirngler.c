// POINTERLARDA STRINGLER

#include <stdio.h>

int main()
{/*
	char isim1[]="mehmet";
	
	char isim2[]={'m','e','h','m','e','t','\0'};// bellekte stringler NULL karakteri ile tutuluyor

	printf("%s\n",isim1);// printf("%c",isim1[0]) bu ise m'yi ekrana basar
	
	printf("%s\n",isim2);
	
	char *p;
	
	p= isim1;
	
	printf("%s\n",p);
	
	printf("%c\n", p[0]);// m basar
	
	
	char *sehir = "sivas";
	
	printf("%s\n", sehir);
	
	printf("%c",sehir[0]);
	
*/


	char *sehir = "sivas";

	while(*sehir != '\0')
	{
		printf("%c --- %p\n",*sehir,sehir);
	
		sehir++;
	}
	
	return 0;
}
