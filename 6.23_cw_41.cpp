#include "h.h"

// ---------------------------------------- //

void jakas_funkcja();

// ---------------------------------------- //

int main()
{
	
	
	for (short i=0 ; i<100 ; i++)
	{
		jakas_funkcja();
	}
	
	PAUSE;
}

// ---------------------------------------- //

void jakas_funkcja()
{
	static int ktory_raz=1;

	COUT "\n Funkcja wywolana " << ktory_raz << " raz.";	
	
	if ( ! (ktory_raz % 12) )
	{
		COUT "\n\n Nowy tuzin! \n";
	}
	
	ktory_raz++;
	
}
