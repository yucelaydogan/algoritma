#include <stdio.h>
#include <conio.h>
#include <string.h>


main()
{
	char cumle[100];
	printf("Bi cumle giriniz:");
	gets(cumle);
	int sayac=0;
	for (int i= 0; i<strlen(cumle); i++)
		if(cumle[i]=='a')
			sayac++;

	printf("\ngirilen cumlede %d adet a harfi vardir.", sayac);
	getch();
}
