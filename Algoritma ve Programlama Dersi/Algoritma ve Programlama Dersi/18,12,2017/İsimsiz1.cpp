#include <stdio.h>
#include <conio.h>

main()
{
	FILE *yaz;
	int x,y;
	yaz = fopen("deneme.txt","w");
	
	printf("1.sayiyi gir: ");
	scanf("%d", &x);
	printf("2.sayiyi gir: ");
	scanf("%d", &y);
	
	fputs("iki sayinin toplani !!!\n", yaz);
	fprintf(yaz, "%d + %d = %d\n", x, y, x+y);
	fclose(yaz);
	printf("Bilgiler kaydedildi.");
	getch();
}
