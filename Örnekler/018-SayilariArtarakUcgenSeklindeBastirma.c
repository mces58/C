// Yine sayilari ucgen seklinde dizme

#include <stdio.h>

int main()
{
	system("color 34");
	
	int i , j , n , s = 1;

	printf("Bir sayi giriniz: ");

	scanf ("%d",&n);
	
	for(i = 1; i <= n; i++) // birinci for 
	{	
		for(j = i; j >= 1; j--)
		{
			printf("%5d",j);
	    
		}
		printf("\n");

	}
	
	for(i = 0; i < n; i++) // ikinci for 
	{
		for(j = 1; j < i; j++)
		{
			printf("%5d",j);
		}
		
		printf("\n");
		
	}	
	getch();
}

/*
                       
	1                 ikinci for 
	1 2                              
	1 2 3
	1 2 3 4 
	1 2 3 4 5
	...
    ...


	1               
	2 1               birinci for 
	3 2 1
	4 3 2 1
	5 4 3 2 1
    ...
    ...
    
  
    
*/
