/*0 ile 200 arasindaki sayilarin okunusunu yazdiran program.*/

#include<stdio.h>

int main( void )
{
	int sayi;
	
		printf( "Sayiyi giriniz: " );
		scanf("%d", &sayi);
		
		if( sayi>199 || sayi<0 )
		{
		
		
			printf("Girdiginiz sayi uygun degildir.\n\n"
				"0 ile 200 arasinda olmalidir.\n\n");
		}
		else
		{
		
	printf( "\n%d sayisi,\n\n",sayi );

	switch( sayi/100 ) {
	
		case 1: printf( "yuz" ); 	break;
	}

	switch ( (sayi%100)/10 ) {	
		case 9: printf( "doksan" ); 	break;
		case 8: printf( "seksen" ); 	break;
		case 7: printf( "yetmis" ); 	break;
		case 6: printf( "altmis" ); 	break;
		case 5: printf( "elli" ); 	    break;
		case 4: printf( "kirk" );     	break;
		case 3: printf( "otuz" );   	break;
		case 2: printf( "yirmi" );  	break;
		case 1: printf( "on" );     	break;
	}

	switch ( (sayi%10) ) {	
		case 9: printf( " dokuz" );  	break;
		case 8: printf( " sekiz" );  	break;
		case 7: printf( " yedi" );   	break;
		case 6: printf( " alti" );   	break;
		case 5: printf( " bes" );    	break;
		case 4: printf( " dort" );   	break;
		case 3: printf( " uc" );     	break;
		case 2: printf( " iki" );    	break;
		case 1: printf( " bir" );    	break;
	}
	
	if( sayi == 0 )
		printf( "sifir" );

	printf( " seklinde okunur.\n" );
	
	}
	return 0;
	
}



