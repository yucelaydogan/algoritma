#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	printf("Bir say� girin: ");
	scanf("%d",&sayi);
	printf("Girilen say�= %d",sayi);
	getch();
	
}
