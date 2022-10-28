#include "h.h"

int okienko_dialogowe (const char* tytul, const char* komunikat, bool (*sprawdz)(int liczba));
bool czy_w_przedziale (int liczba);
bool czy_parzysta (int liczba);

//-----------------------------------------------------------------------------------------//

int main()
{
	okienko_dialogowe("WPROWADZ LICZBE", "Wprowadz dowolna liczbe parzysta", czy_parzysta);
	
	okienko_dialogowe("WPROWADZ LICZBE", "Wprowadz liczbe z przedzialu 9-17", czy_w_przedziale);
	
	PAUSE;
}

//-----------------------------------------------------------------------------------------//


int okienko_dialogowe (const char* tytul, const char* komunikat, bool (*sprawdz)(int liczba))
{
	int i;
	int czy_prawda;
	
	ENDL;
	
	COUT "##########  " << tytul << "  ########## \n"
	  << "#  \n"
	  << "#  " << komunikat << endl
	  << "#  ";
	  
	CIN i;
	  
	czy_prawda=(sprawdz(i));
	
	while(!czy_prawda)
	{
		COUT "#\n"
		  << "#  Wprowadziles bledna wartosc. \n"
		  << "#  Wprowadz poprawna wartosc: ";
		  
		CIN i;
		
		czy_prawda=(sprawdz(i));
	}
	
	COUT "#\n"
	  << "#######################################\n\n";
	
	return i;
	
}

//-----------------------------------------------------------------------------------------//

bool czy_w_przedziale (int liczba)
{
	int dolna=9;
	int gorna=17;
	
	if ((liczba>=dolna) and (liczba<=gorna))
	{
		return true;
	}
	
	else
	{
		return false;
	}
}

//-----------------------------------------------------------------------------------------//

bool czy_parzysta (int liczba)
{
	if (liczba%2)
	{
		return false;
	}
	
	else
	{
		return true;
	}
}

//-----------------------------------------------------------------------------------------//
