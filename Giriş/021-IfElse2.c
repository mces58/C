/* IF, ELSE, ELSE IF KONU ANLATIMI
bir veya birden fazla kosul var ise bu yapi kullanilir

IF
bir kosulu gerceklestirmek icin kullanilir.Suslu parantez 
kullanilir lakin bir tek islem gerceklesiyorsa suslu 
parantez kullanilmayabilir.

ELSE
if'teki kosul gerceklesmiyorsa else yapisina girer.Burada da suslu
parantez kullanilir.

basit ornekler  */

#include <stdio.h>

void main()
{
	int yas;
	
	printf("Lutfen yasinizi giriniz:\n");
	scanf("%d", &yas);
	
	if(yas >= 18 )
	{
		printf("Ehliyet alabilirsiniz.");
	}
	
	else
	{
		printf("Ehliyet alamazsiniz.");
	}
	
	getch();
}

