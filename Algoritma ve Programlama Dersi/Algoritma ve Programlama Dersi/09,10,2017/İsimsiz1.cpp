#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	int sayi=0, adet=0;
	printf("Bir sayý giriniz: ");
	scanf("%d", &sayi);
	for (int i=50; i < 201; i++)
	{
	
		if(i%sayi==0)
		adet++;
	}	
	printf("Tam bölünen sayý sayýsý: %d \n", adet);
	getch();
}
