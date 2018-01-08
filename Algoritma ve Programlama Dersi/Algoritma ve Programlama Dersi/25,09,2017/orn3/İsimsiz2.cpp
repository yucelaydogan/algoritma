#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Turkish");
	int notu=12;
	double pi=3.14;
	char harf='A';
	printf("Notu %d, Pi=%f, Harf=%c", notu, pi, harf);
	getch();
	
}
