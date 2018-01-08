#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	int sayi=0, bolen=2, sayac=0;
	printf("Bir Sayi Giriniz: ");
	scanf("%d", &sayi);
	for ( bolen = 2; bolen < sayi ; bolen++)
	{
	
		if(sayi%bolen !=0)
			printf("%d sayisi asaldir.",sayi);
			sayac++ ;
		else
			printf("%d sayisi asal degildir.",sayi);
	}
		printf("%d kez denendi",sayac);
		getch();
}
