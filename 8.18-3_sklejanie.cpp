#include "h.h"

char* doklej (char* pierwszy, const char* drugi);

// ---------------------------------------------------------------------------------- //

main()
{
	char pierwszy[40] = {"Najpierw to, "};
	char drugi[20] = {"a teraz tamto."};
	
	COUT (doklej (pierwszy, drugi));
}


// ---------------------------------------------------------------------------------- //

char* doklej (char* pierwszy, const char* drugi)
{	
	char* poczatek = pierwszy;
	
	while(*pierwszy++);
	
	pierwszy--;
	
	while ( *(pierwszy++) = *(drugi++));
		
	return (poczatek);
}
