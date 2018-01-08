#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	float sayi1,sayi2;
	
	printf("Birinci sayiyi girin: ");
	scanf("%f",&sayi1);
	
	printf("Ikinci sayiyi girin: ");
	scanf("%f",&sayi2);
	
	
	if(sayi1 > sayi2)
	printf("birinci sayi ikinci sayidan buyuk\n");
    else
    printf("ikinci sayi birinci sayidan buyuk\n");


	float toplam=0;
	toplam=sayi1+sayi2;
	printf("sayi1 ile sayi2'nin toplamý: %f",toplam);
	getch();
}
