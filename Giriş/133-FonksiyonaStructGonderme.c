// bir onceki ornekten farki tarih struct'ini fonksiyon ile yaptik

#include <stdio.h>

struct futbolcu 
{
	char ad[20],takim[20];
	
	int yas;
};


struct tarih
{
	char date[50];

}t={"08/08/2001"};


void goster(struct futbolcu x, struct tarih t)
{
	
	printf("ad: %s\ntakim: %s\nyas: %d\n",x.ad, x.takim, x.yas);
	
	printf("tarih: %s",t.date);
	
}


int main()
{
	struct futbolcu	f = {"ronaldo","juventus",39};
	
	goster(f,t);
	
	return 0;
}
// burada void'e iki tane struct gondermeyi gorduk

