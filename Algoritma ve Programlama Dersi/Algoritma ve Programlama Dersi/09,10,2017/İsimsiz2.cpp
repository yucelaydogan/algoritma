#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	float sayi=0, sonuc=1;
	printf("Bir Sayi Giriniz: ");
	scanf("%f", &sayi);
	for ( int i = sayi; i > 0 ; i--)
		sonuc=sonuc*i;
		
	printf("%f ! = %f",sayi, sonuc);
	getch();
}
