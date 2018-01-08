#include <stdio.h>
#include <conio.h>

struct tarih
{
	int gun, ay, yil;
}deger;

void goster(struct tarih ifade)
{
	printf("Tarih: %d/%d/%d\n", ifade.gun, ifade.ay, ifade.yil);

}

main()
{
	deger.gun=11;
	deger.ay=12;
	deger.yil= 2017;
	
goster(deger);
}
