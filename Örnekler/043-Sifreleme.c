#include <stdio.h>
#include <string.h>

int main()
{
	char text[50], passWord[50];
	
	printf("Metini giriniz...\n");
	
	gets(text);
	
	int key;
	
	printf("Anahtar sayiyi giriniz: ");
	
	scanf("%d",&key);
	
	int i =0;
	
	char c;
	
	while( i < strlen(text)){
		
		c = text[i];
		
		passWord[i] = (char)( (int)c + key );
		
		i++;
	}
	
	puts(passWord);
	
	return(0);
}
