#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	int islem;
	ufuk:
	float sayi1=0,sayi2=0,sayi3=0,sayi4=0,sayi5=0,toplam=0;
	printf("Birinci sayiyi girin: ");
	scanf("%f",&sayi1);	
	printf("Ikinci sayiyi girin: ");
	scanf("%f",&sayi2);
	printf("Ikinci sayiyi girin: ");
	scanf("%f",&sayi2);
	printf("Ikinci sayiyi girin: ");
	scanf("%f",&sayi2);
	printf("Ikinci sayiyi girin: ");
	scanf("%f",&sayi2);
	printf("Ýþlem Giriniz:\n 1.Toplama\n2.Cikarma\n");
	scanf("%d",&islem);
	
	if(islem == 1)
	{
		toplam= sayi1+sayi2;
	printf("Ýþlemin sonucu: %f\n\n",toplam);

	}
	    else if(islem==2)
	{
	    
	toplam=sayi1-sayi2;
    printf("Islemin sonucu: %f\n\n",toplam);
	}
	
	 else
	    
    printf("Yanlis islem girdiniz.\n\n");
    goto ufuk;
	
	getch();
}
