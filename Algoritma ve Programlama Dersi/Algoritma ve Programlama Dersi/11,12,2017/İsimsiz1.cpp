#include <stdio.h>
#include <conio.h>

struct kayit
{
	char ad[10];
	int no;
	int sinif;
};

main()
{
	struct kayit ogrenci;
	printf("Ogrenci Nosu: ");
	scanf("%d",&ogrenci.no);
	printf("Ogrenci Adi: ");
	scanf("%s",&ogrenci.ad);
	printf("Ogrenci Sinifi: ");
	scanf("%d",&ogrenci.sinif);
	printf("\n---Girilen Bilgiler--- ");
	printf("\n Ogrenci Adi: %s", ogrenci.ad);
	printf("\n Ogrenci Nosu: %d", ogrenci.no);
	printf("\n Ogrenci Sinifi: %d", ogrenci.sinif);
	getch();
}
