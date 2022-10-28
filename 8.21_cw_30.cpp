#include "h.h"

//------------------------------------------------------------------------------//

void zwieksz (int* wsk, int o_ile, int pierwszy, int ostatni);

//------------------------------------------------------------------------------//

int main()
{
	int tab[30];
	
	for (int i=0 ; i<30 ; i++ )
	{
		tab[i] = i;
	}
	
	POKAZ_T (tab,30);
	
	zwieksz(tab, 100, 0, 5);
	
	ENDL;
	
	POKAZ_T (tab,30);
		
	PAUSE;
}

//------------------------------------------------------------------------------//

void zwieksz (int* wsk, int o_ile, int pierwszy, int ostatni)
{	
	wsk += pierwszy;
	
	int indeks = pierwszy;
	
	while (indeks<=ostatni)
	{
		*wsk += o_ile;
				
		wsk++;
		indeks++;
	}
	
}