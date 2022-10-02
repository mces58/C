// Silindirin Hacmini Hesaplama


#include <stdio.h>

int main()
{
	float yaricap, yukseklik;
	
	printf("Lutfen yaricap ve yukseklik degerlerini giriniz:\n");
	scanf("%f %f ", &yaricap, &yukseklik);
	
	float hacim = 3.14 * yaricap * yukseklik;
	
	printf("Silindirin Hacmi: %.3f\n", hacim);
	printf("%f %f", yaricap, yukseklik);
	
	/* bu kod da ben 2 degisken girilmesini isterken kod 3 degisken 
	aliyor ama alinan 3. degisken sonuca etki etmiyor burasini anlamadim
	daha sonra donup bakmaliyim*/
	
	return 0;
}

