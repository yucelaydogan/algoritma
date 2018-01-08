#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	printf("Bir sayý girin: ");
	scanf("%d",&sayi);
	printf("Girilen sayý= %d",sayi);
	getch();
	
}
