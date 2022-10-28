#include "h.h"

//-----------------------------------------------------------------//

char* producent (void);

//-----------------------------------------------------------------//

int main()
{

	char *w1, *w2, *w3;

	w1 = producent();
	w2 = producent();
	w3 = producent();



	PAUSE;
}

//-----------------------------------------------------------------//

char* producent (void)
{
	char* wsk;

	COUT " Tworze nowy obiekt... \n";

	wsk = new char;			// Ta nieszczęsna instrukcja oznacza: stwórz nowy obiekt typu "char" i przypisz jego adres do wskaźnika "wsk".

	return w;
}

//-----------------------------------------------------------------//
