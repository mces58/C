#include <stdio.h>

struct futbolcu 
{
	char ad[20],takim[20];
	
	int yas;
	
};

void goster(struct futbolcu x)//parametreyi struct olarak belirtmeliyiz
{
	printf("ad: %s\ntakim: %s\nyas: %d", x.ad, x.takim, x.yas);
}


int main()
{
	struct futbolcu f = {"ronaldo","juventus",39};
	
	goster(f);
	
	return 0;
}
