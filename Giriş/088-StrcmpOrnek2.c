#include <stdio.h>
#include <string.h>

int main()
{
	
	char isim[][9]={"yagmur","umut","asli","zehra","kaan","mert","can","emir","ali"},gecici_bellek[9];
	// ilk koseli parantez kac kelime olacagi icindir.istedigimiz kadar yazabilmek icin bos biraktim
	// ikici koseli parantez isim sayisini ifade ediyor
	
	int i,j;
	
	printf("---Oncesi---\n\n");
	
	for (i=0; i<9; i++)
	{
		printf("%s\n",isim[i]);
	}
	
	for(i=0; i<9; i++)
	{
		for(j=0; j<9; j++)
		{
			if(strcmp(isim[j], isim[j+1])>0)
			{
				strcpy(gecici_bellek,isim[j]);
				
				strcpy(isim[j],isim[j+1]);
				
				strcpy(isim[j+1],gecici_bellek);
			}
		}
	}
	
	printf("---Sonrasi---");
	
	for(i=0; i<=9; i++)
	{
		printf("%s\n",isim[i]);
	}
	
	return 0;
}
