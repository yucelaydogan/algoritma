#include <stdio.h>
#include <conio.h>
#include <string.h>


main()
{
	char kelime[100];
	printf("Bir kelime giriniz :");
	gets(kelime);
	int uzunluk = 0;
	uzunluk = strlen(kelime);
	printf("\n%d harf",uzunluk);
	
	for(int i=0; i<uzunluk; i++)
		printf("\n%c", kelime[i]);
		
	getch();
}
