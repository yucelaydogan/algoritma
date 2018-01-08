#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int s1, a,b,c,d,e=0,f,g;
	srand(time(NULL));
	for(int i=0; i<10 ; i++)
	{
		s1 =100+rand()%899;
		printf("Sayi = %d\n",s1);
		b=(s1%100)/10;
		c=s1/100;
		a=s1%10;
		d=a+b+c;
		if(d%2==0)
		{
			if(e<d)
			{
				e=d;
				f=s1;
			}
		}
		
	}
	printf("Rakamlarý toplami cift ve en buyuk olan = %d\n",f);
	printf("Rakamlarý toplami = %d\n",e);

	
	getch();
}
