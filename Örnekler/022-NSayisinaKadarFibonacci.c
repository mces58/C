#include <stdio.h>

int main()
{
	system("color 1e");
	
	int i,n;

	printf("Fibonacci dizisinde ki kacinci elemani bulmak istiyorsunuz: ");
	
	scanf("%d",&n);
	
	int a = 1, b = 1, c;
	
	// n sayisi kac ise orada ki elemana kadar bastiriyor
	for(i = 0; i < n-2; i++)
	{
		c = a + b;
		
		a = b;
		
		b = c;
		
	}	

	printf("\nFibonacci dizisinde ki %d . eleman : %d\n\n",n, c);
	
	
	// n sayisindan onceki sayilari da bastirma ve onlari toplama
	
	int fib[100];
	
	double toplam =0;
	
	fib[0] = 1;
	 
	fib[1] = 1;
	
	for(i = 2; i < n; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	
	}
	
	printf("%d . elemandan onceki sayilar: \n\n",n);
	
	for(i = 0; i < n-1; i++)
	{
		printf("%d ",fib[i]);
	}
	
	for(i = 2; i < n-1; i++)
	{
		toplam += fib[i-1]+ fib[i-2];
	}
	
	printf("\ntoplam : %.f",toplam + 2);
	
	return 0;
}
