#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Turkish");
	int a=2, b=10, c=50;
	float f=1.05, g=25.5, h=0.1, yuzde;
	
	printf("/nTAB kullan�lmadan yaz�lan tam say�lar: %d %d %d",a,b,c);
	printf("/nTAB kullan�larak yaz�lan tam say�lar: \t%d \t%d \t%d",a,b,c);
	
	printf("/n�� reel say�n�n tek sat�rda yaz�lmas�: %f\t%f\t%f ",f,g,h);
	printf("/n�� reel say�n�n �� sat�rda yaz�lmas�: \n \n \t%f\n \t%f\n\t%f ",f,g,h);
	yuzde=(220*25)/100.0;
	printf("\n220'�n %%25'i %f'dir.",yuzde);
	printf("\n%f /n%f i�leminin sonucu = %f\n",g,f,g/f);
	
	printf("\n program sonunda beep sesi ��kar...\a");
	

}
