#include "h.h"

char* kopiuj (char* cel, const char* zrodlo);

// ---------------------------------------------------------------------------------- //

main()
{
	char poziom[] = {"Poziom szumu w normie."};
	char miejsce[80];
	
	kopiuj (miejsce, poziom);
	
	COUT poziom << endl << miejsce;
}


// ---------------------------------------------------------------------------------- //

char* kopiuj (char* cel, const char* zrodlo)
{	
	char* poczatek = cel;
	
	while ( *(cel++) = *(zrodlo++) );
		
	return (poczatek);
}
