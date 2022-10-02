#include <stdio.h>
#include <string.h>

int main()
{
	char bir_seyler[100];
	
	printf("Bir seyler yaziniz...\n");
	
//	scanf("%s",bir_seyler); bunu kullandigimizda space karakterine kadar olani sayiyor gets hepsini sayiyor
	
	gets(bir_seyler);
		
	printf("Girilen ifadenin uzunlugu: %d", strlen(bir_seyler));
}
