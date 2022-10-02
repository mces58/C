#include <stdio.h>

int dizi_eleman_toplam(int dizi[], int n)
{
	int i, toplam = 0;
	
	printf("\nDizinin elemanlarini giriniz;\n");
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &dizi[i]);
	}
	
	for(i = 0; i < n; i++)
	{
		toplam += dizi[i];
	}
	
	return toplam;
}


int main()
{
	system("color 3f");
	
	int n, sonuc;
	
	printf("Dizinin boyutu giriniz: ");
	
	scanf("%d",&n);
	
	int dizi[n];
	
	sonuc = dizi_eleman_toplam(dizi,n);
	
	printf("\nGirdiginiz elemanlarin toplami: %d",sonuc);
	
	return 0;
}
