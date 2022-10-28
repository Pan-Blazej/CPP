#include "h.h"

int fun1();
int fun2();
int fun3();

// --------------------------------------------------------------------------------- //

int main()
{
	int 	i;
	int		(*wsk_fun)();
	
	ENDL;
	
	COUT " Jaka funkcje mam wykonac (1-3)? " << endl << " ";
	
	CIN i;
	
	switch(i)
	{
		case (1):
		wsk_fun=&fun1;
		break;
		
		case (2):
		wsk_fun=&fun2;
		break;
		
		case (3):
		wsk_fun=&fun3;
		break;
		
		default:
		wsk_fun=0;
		break;
	}
	
	if (wsk_fun)
	{
		COUT " Uruchamiam funkcje " << i << ":\n";
		(*wsk_fun)();
	}
	
	
	PAUSE;
}

// --------------------------------------------------------------------------------- //

int fun1()
{
	COUT " Funkcja pierwsza!";
}

// --------------------------------------------------------------------------------- //

int fun2()
{
	COUT " Funkcja druga!";
}

// --------------------------------------------------------------------------------- //

int fun3()
{
	COUT " Funkcja trzecia!";
}

// --------------------------------------------------------------------------------- //
