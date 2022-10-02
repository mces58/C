#include <stdio.h>


struct sehirler
{
	char ad[20];
	
	int nufus;
	
	char bolge[20];
	
	int il_kodu;
	
};


int main()
{
	
	struct sehirler s[3]={{"sivas",250000,"ic anadolu",58},{"balikesir",35000,"marmara",10},
	{"trabzon",55555,"karadeniz",62}};
	
	int i;	
	
	for(i=0; i<3; i++)
	{
		printf("ad: %s\nnufus: %d\nbolge: %s\nil kodu: %d\n\n",s[i].ad, s[i].nufus, s[i].bolge, s[i].il_kodu);
	}
	
	
	printf("\n\nPointer kullanimi sonrasi\n\n\n");
	
	struct sehirler *ptr_s;
	
	ptr_s = s;// dizinin ilk indisini boyle atayabiliyorduk ptr_s = s[0];
	
		for(i=0; i<3; i++)
	{
		printf("ad: %s\nnufus: %d\n",ptr_s->ad,ptr_s->nufus);
		
		printf("bolge: %s\nil kodu: %d\n\n",ptr_s->bolge,ptr_s->il_kodu);
	}
		
		printf("\n\nAdres\n\n\n");
	
		for(i=0; i<3; i++)
	{
		printf("ad: %x\nnufus: %x\n",&s->ad,&s->nufus);
		
		printf("bolge: %x\nil kodu: %x\n\n",&s->bolge,&s->il_kodu);
		
		/* adresi bastirirken pointer kullandim ve hata aldim bende & ile adresi bastirim 
		
		neden pointer ile adresi bastiramadim ogren??
		
		*/
	}

	return 0;
}
