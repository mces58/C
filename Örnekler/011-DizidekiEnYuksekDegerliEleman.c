#include <stdio.h>

int main()
{
	system("color b");
		
	int i,n,max = 0;
	
	printf("Kac ogrenci bulunmaktadir?\n");
	
	scanf("%d",&n);

	int notlar[n];
	
	for(i=0; i < n; i++)
	{
		printf("\n%d . ogrencinin notunu giriniz: ",i+1);
		
		scanf("%d",&notlar[i]);
		
		if(notlar[i] > notlar[i-1])
		{
			max = notlar[i];
		}
	}
	
	getch();
	
	system("cls");
	
	printf("En yuksek not: %d\n",max);
	
	
	return 0;
}
