#include <stdio.h>

int main()
{
	FILE *dosya1;
	
	dosya1 = fopen("can.txt","a");
	
	
	fputs("Merhaba dunya\n",dosya1);
	
	
	fclose(dosya1);
	
	/* burada ilk calistiginda dosyaya bir tane merhaba dunya yazar
	bir daha calistiginda yine yazar lakin ilk yazilan da silinmemis olur onun uzerine yazar
	*/
	
	return 0;
}
