#include "h.h"


void pokaz_t (const int* tab, int ile);

int main()
{
	const int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	ENDL; 
	
	pokaz_t(tab, 10);
	
	PAUSE;
}

void pokaz_t (const int* tab, int ile)
{
	for (int i=0 ; i<ile ; i++ )
	{
		COUT " tab\[" << i << "\] :\t" << *(tab+i) << "\n";
	}
	
}