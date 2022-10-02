//ENUM YAPISI

#include <stdio.h>

enum sehirler
{
	adana=1, adiyaman, afyon, agri, amasya, ankara, antalya, aydin, artvin, balikesir
};

// sifirdan basladigi icin ilk birden baslasin diye 1 atadim

int main()
{
	printf("%d\n",adana);
	
	printf("%d\n",adiyaman);
	
	enum sehirler il;//struct'larda oldugu gibi nesne tanimliyoruz
	
	il = afyon;
	
	printf("%d\n",il);
	
	il = agri;
	
	if(il == agri)
	{
		printf("%d\n",agri);
	}
	else
	{
		printf("%d\n",amasya);
	}
	
	return 0;
}
