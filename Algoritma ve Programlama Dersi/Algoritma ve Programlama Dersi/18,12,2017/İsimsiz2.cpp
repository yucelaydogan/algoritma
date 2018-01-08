#include <stdio.h>
#include <conio.h>

main()
{
	FILE *dosya;
	char ad[10];
	int no, Not;
	dosya = fopen("ogrenci.txt","w");
	puts("3 ogrenciye ait bilgileri girin: ");
	fprintf(dosya, "No\tAd\tNotu\n");
	for(int i= 0; i<3; i++)
	{
		printf("%d. ogrencinin numarasi:", i+1); scanf("%d", &no);
		printf("%d. ogrencinin adi:", i+1); scanf("%s", &ad);
		printf("%d. ogrencinin notu:", i+1); scanf("%d", &Not);
		printf("\n");
		
		fprintf(dosya, "%d\t%s\t%d\n",no,ad,Not);
	}
	fclose(dosya);
	printf("Bilgiler kaydedildi.");
	getch();
}
