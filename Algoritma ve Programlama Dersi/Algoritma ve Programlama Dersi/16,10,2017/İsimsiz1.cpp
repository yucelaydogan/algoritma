#include <stdio.h>    
#include <stdlib.h>   
#include <time.h>    
#include <conio.h>
int main ()
{
  int r1,toplam=0;
  srand (time(NULL));
  for (int i=0;i<10;i++)
  {
    r1 = rand() % 25 + 225;
	if(r1%2==0)
	{
		printf("Tek Sayi = %d \n",r1);
			   }           
	else
	{
		printf("Çift = %d \n",r1);
		
	}
  }
  getch();
}
