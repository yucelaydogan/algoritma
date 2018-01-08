#include <stdio.h>
#include <conio.h>

struct ders_adi
{
	char gun[20];
	int saati;
};

struct ogretim_elemanlari
{
	char dersadi[50];
	char dershocasi[50];
	struct ders_adi ders;
};



struct universite
{
	char fakulteadi[50];
	char bolumadi[50];
	struct ogretim_elemanlari ogretim;
}kayit[2];

main()
{
	printf("\n ***UNIVERSITE*** \n");
	for (int i = 0 ; i<2 ; i++)
	{
		
		
		printf("\n \n Fakulte Adini Giriniz: ");
		gets(kayit[i].fakulteadi);
		
		printf("\n Bolum Adini Giriniz: ");
		gets(kayit[i].bolumadi);
		
		printf("\n Dersin Adini Giriniz: ");
		gets(kayit[i].ogretim.dersadi);
		
		printf("\n Bu Derste Gorevli Hocayi Giriniz: ");
		gets(kayit[i].ogretim.dershocasi);
		
		printf("\n Dersin Islenecegi Gunu Giriniz: ");
		gets(kayit[i].ogretim.ders.gun);
		
		printf("\n Dersin Islenecegi Saati Giriniz: ");
		scanf("%d", &kayit[i].ogretim.ders.saati);
		
	}
	for (int i=0; i<2 ; i++)
	{
		
		printf("%s fakultesindeki: \n", kayit[i].fakulteadi);
		printf("%s bolumunun %s dersine %s hoca %s gunu saat %d'te girmektedir.\n\n\n", 
		kayit[i].bolumadi, kayit[i].ogretim.dersadi, kayit[i].ogretim.dershocasi, kayit[i].ogretim.ders.gun, kayit[i].ogretim.ders.saati);
	}
	getch();
}
