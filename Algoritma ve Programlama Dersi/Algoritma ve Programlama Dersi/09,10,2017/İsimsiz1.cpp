#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	int sayi=0, adet=0;
	printf("Bir say� giriniz: ");
	scanf("%d", &sayi);
	for (int i=50; i < 201; i++)
	{
	
		if(i%sayi==0)
		adet++;
	}	
	printf("Tam b�l�nen say� say�s�: %d \n", adet);
	getch();
}
