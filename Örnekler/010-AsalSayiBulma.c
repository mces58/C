#include<stdio.h>

main()
{
    int i,sayi,sayac=0;
    printf("Sayiyi giriniz : ");
    scanf("%d",&sayi);
    
    for(i=2;i<sayi;i++)
    {
       if(sayi%i==0)
       {
           sayac++;
       }    
    }     
    
    if(sayac==0)
    {
        printf("Asal sayidir.");                    
    }
    else
    {
        printf("Asal sayi degildir."); 
    }
    
    getch();
}
