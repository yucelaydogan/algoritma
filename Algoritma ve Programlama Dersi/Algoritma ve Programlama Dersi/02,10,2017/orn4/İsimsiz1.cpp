#include <stdio.h>
#include <conio.h>
main()
{
	char harf;
	int deneme;
	ufuk:
	printf("Lufen bir karakter girin: ");
	ufuk:
	scanf("%c",&harf);
	
	switch (harf)
{
	case 'a':
		printf("\n a harfine bastiniz.\n"); break;
			case 'b':
		printf("\n b harfine bastiniz.\n"); break;
			case 'c':
		printf("\n c harfine bastiniz.\n"); break;
		default:
		printf("\n a, b ya da c'ye basmadiniz\n"); break;
		
	
}
	printf("Tekrar denemek ister misiniz? (1-Evet, 2-Hayýr)");
	scanf("%d",&deneme);
	
	if (deneme == 1)
	goto ufuk;
	else 
	printf("Siz bilirsiniz... Gorusmek dilegiyle :)");
	
getch();

}
