#include <stdio.h>
#include <conio.h>

main()
{
	int adet=1;
	int bosluk=1;
	for (int i=0; i<5; i++)
	{
		for (int a=0; a<bosluk; a++)
		{
		printf(" ");
		}
		for(int j=0; j<adet; j++)
		{
			printf("*");
		}
		adet=2;
		bosluk-=2;
		printf("\n");
		adet++;
	}
	getch();
}
