// A - Z ALFABE SIRALAMA

#include <stdio.h>

int main()
{
	char c;// char ile atama yaparken tirnak icine alinir
	
	for (c = 'A'; c <= 'Z'; c++)
	{
		printf("siralama: %c\n", c);

	}

	return 0;
}

// BU DA WHILE ILE YAPILIS
//#include <stdio.h>
//
//int main()
//{
//	char c = 'A';
//	
//	while (c <= 'Z')
//	{
//		printf("siralama: %c\n",c);
//		c++;
//	}
//	return 0;
//}
