#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

main()
{
	FILE *ogrencinotlar;
	char ad[10], enyuksekkisi[10]="en";
	float notu=0, nosu=0, enyuksek=0, endusuk=101, toplam=0, kisisayac=0;
	float ortalama;
	ogrencinotlar= fopen("ogrencinotlar.txt","r");
	while(!feof(ogrencinotlar))
	{
		fscanf(ogrencinotlar,"%f\t%s\t%f\n",&nosu,&ad,&notu);
		printf("%f\t%s\t%f\n", nosu,ad, notu);
		toplam=toplam+notu;
		kisisayac=kisisayac+1;
		if(enyuksek<notu)
		{
			strcpy(enyuksekkisi,ad);
			enyuksek= notu;
		}
		if(notu<endusuk)
		{
			endusuk= notu;
		}
	}
	fclose(ogrencinotlar);
	printf("En yuksek notu alan kisi: %s\n", enyuksekkisi);
	printf("En yuksek not: %f\n", enyuksek);
	printf("En dusuk not: %f\n", endusuk);
	ortalama=(float)toplam/kisisayac;
	printf("Ortalama: %f\n", ortalama);
	
	getch();
}
