#include "h.h"

int sumuj (int ile)
{
	int suma{};
	
	for ( short i=0 ; i<ile ; i++)
	{
		suma += i;
	}
	
	return suma;
}

int main()
{
	short n=1;
	
	COUT "\n Dla zmiennej 'n' rownej " << n << " funkcja 'sumuj' przybierze wartosc "
	  << sumuj(n) << ".";
	  
	PAUSE;	
}
