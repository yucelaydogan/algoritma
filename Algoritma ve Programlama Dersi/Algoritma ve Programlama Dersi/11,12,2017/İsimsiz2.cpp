#include <stdio.h>
#include <conio.h>

struct kayitlar
{
	char ad[10];
	int yas;
	int notu;
}ogrenciler[5];

main()
{
	for (int i = 0 ; i<5 ; i++)
	{
		printf("\n %d . ogrencinin bilgileri\n",i+1);
		printf("Ogrenci Adi:");
		scanf("%s", &ogrenciler[i].ad);
				
		printf("Ogrenci Yasi:");
		scanf("%d", &ogrenciler[i].yas);
	
		printf("Ogrenci Notu:");
		scanf("%s", &ogrenciler[i].notu);	
	}
	for (int i=0; i<5 ; i++)
	{
		printf("%d . ogrenci %s, %d yasindadir ve notu %d'dur.\n",i+1, ogrenciler[i].ad,ogrenciler[i].yas, ogrenciler[i].notu);
	}
}
