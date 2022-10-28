#include <vector>
#include <string>
#include "h.h"

int main()
{
	vector <string> nazwiska {"Atasinski", "Boleslawski", "Cedzyniak"};
	
	COUT " Jakie nazwisko dopisac (0 - koniec)? ";
	
	string wpis;
	
	ENDL; ENDL;
	
	while(1)
	{
		COUT " Podaj nazwisko: ";
		CIN wpis;
		if (wpis=="0") break;
		else
		nazwiska.push_back(wpis);
		ENDL;
	}
	
	COUT "\n Dziekuje."
	  << "\n Teraz wypisze wszystkie nazwiska z listy:\n\n";
	
	for (auto i : nazwiska)
	{
		COUT " " << i << endl;
	}
	
	COUT "\n W tablicy znajduje sie teraz " << nazwiska.size() << " nazwisk. ";
	
	nazwiska[0] = "Fiu-Bzdziu";
	
	COUT "\n\n Psikus! Zmienilem jedno nazwisko. Czy rozpoznasz, ktore? \n\n";
	
	for (auto i : nazwiska)
	{
		COUT " " << i << endl;
	}
		
	PAUSE;
}