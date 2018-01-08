#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main ()
{
	int sayi[5][3];
	srand (time(NULL));
	printf("sayi matrisinin elemanlarini girin: \n");
	for(int i=0; i<3;i++)
	{
		for(int j=0; j<4 ; j++)
		{
			printf("sayi(%d,%d)=",i,j);
			sayi
			scanf("%d",&sayi[i][j]);
		}
	}
	for (int i=0; i<3 ; i++)
	{
		for(int j=0; j<4;j++)
		{
			printf("%d\t",sayi[i][j]);
		}
		printf("\n");
	}
	getch ();
}
