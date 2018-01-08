#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct notlar
{
	char dersadi[50];
	int notu;
};

struct geneldurum
{
	char gdurum[20];
};


struct ogrenciler
{
	char ad[50];
	int sinif, nosu;
	struct notlar nbilgiler;
	struct geneldurum gbilgiler;
}ogrenci[3];

main()
{
	char kaldi[20]="Kaldi", gecti[20]="Gecti";
	FILE *ogrencinotlar;
	ogrencinotlar= fopen("ogrencinotlar1.txt","w");
	
	printf("\n ***UNIVERSITE*** \n");
	for (int i = 0 ; i<3 ; i++)
	{
		
		printf("\n\n %d. Ogrenci Bilgileri\n\n", i+1);
		
		printf("Ogrenci Adi ve Soyadi: ");
		scanf("%s", &ogrenci[i].ad);
		
		printf("\nOgrenci Sinifi:");
		scanf("%d",&ogrenci[i].sinif);
		
		printf("\n Ogrenci Nosu:");
		scanf("%d", &ogrenci[i].nosu);
		
		printf("\n \n Ders Adini Giriniz: ");
		scanf("%s", &ogrenci[i].nbilgiler.dersadi);
		
		printf("\n Notu:");
		scanf("%d", &ogrenci[i].nbilgiler.notu);
		
		strcpy(ogrenci[i].gbilgiler.gdurum,kaldi);
		
		if( ogrenci[i].nbilgiler.notu>=45)
		{
			strcpy(ogrenci[i].gbilgiler.gdurum,gecti);
		}
			
		
		fprintf(ogrencinotlar,"%s\t\t%d\t%d\t%d\t%s\n",ogrenci[i].ad, ogrenci[i].sinif, ogrenci[i].nosu, ogrenci[i].nbilgiler.notu, ogrenci[i].gbilgiler.gdurum );
	}		
	
		printf("Bilgiler Kaydedildi.");
}
