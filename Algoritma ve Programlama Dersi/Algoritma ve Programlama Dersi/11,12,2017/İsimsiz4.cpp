#include <stdio.h>
#include <conio.h>

struct dogum_tarihi
{
	int gun,ay,yil;
};

struct sahis_bilgileri
{
	char isim[50];
	int boy;
	struct dogum_tarihi tarih;
}kisi[3];

main()
{
	for (int i = 0 ; i<3 ; i++)
	{
		printf("\n %d . ogrencinin bilgileri\n",i+1);
		printf("Kisi Adi:");
		scanf("%s", &kisi[i].isim);
				
		printf("Kisi Boyu (cm):");
		scanf("%d", &kisi[i].boy);
	
		printf("Kisi Dogum Tarihi (Gun):");
		scanf("%d", &kisi[i].tarih.gun);	
		
		printf("Kisi Dogum Tarihi (Ay):");
		scanf("%d", &kisi[i].tarih.ay);	
		
		printf("Kisi Dogum Tarihi (Yil):");
		scanf("%d", &kisi[i].tarih.yil);	
	}
	for (int i=0; i<3 ; i++)
	{
		printf("%s , %d boyundadir ve dogum tarihi %d/%d/%d'dir.'\n", kisi[i].isim, kisi[i].boy, kisi[i].tarih.gun, kisi[i].tarih.ay, kisi[i].tarih.yil);
	}
}
