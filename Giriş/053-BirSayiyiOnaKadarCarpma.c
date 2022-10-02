// ISTENILEN BIR SAYIYI 10'A KADAR OLAN CARPIMLARINI YAZDIRAN PROGRAM

#include <stdio.h>

int main()
{
	int sayi, a, carpim =0 ;
	
	printf("bir sayi girin.\n");
	scanf("%d", &sayi);
	
	for (a = 0; a <= 10; a++)
	{
		carpim = sayi * a;
		printf("%d x %d: %d\n", a, sayi, carpim);
	}
	
	return 0;
	
}

//#include <stdio.h>
//
//int main()
//{
//	
//	int sayi;
//	int a = 0;
//	int carpim = 0;
//	
//	printf("bir sayi girin.\n");
//	scanf("%d", &sayi);
//	
//	while (a <= 10)
//	{
//		carpim = sayi * a;
//		printf("%d x %d: %d\n", a, sayi, carpim);
//		a++;
//	}
//	
//	return 0;
//}

