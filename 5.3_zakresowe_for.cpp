#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	
//------------------------------------------------------------------------------------------------------------------------//

	vector <double> liczby { 3.14, 4.4, -6.6, 7.7};		//  Wektor (tabela) liczb double.
	
	for (auto i : liczby)	//  Tworzymy zmienn¹ "i", przyjmuj¹c¹ kolejne wartoœci z tabeli "liczby".
	{						//  Jest ona typu automatycznie rozpoznanego.
		cout << i << endl;
	}
	
	cout << endl;
	
	for (auto &i : liczby)	//  Teraz chcê zmodyfikowaæ wartoœci w wektorze. Tworzê pêtlê operuj¹c¹ na referencji.
	{
		i = 1;
	}
	
	for (auto i : liczby)
	{
		cout << i << endl;
	}
	
	cout << endl;
	
	for (auto i : liczby)	//  SprawdŸmy, jak siê zachowa bez ampersand.
	{
		i = 8;		
		
	}
	
	cout << endl;
	
	for (auto i : liczby)
	{
		cout << i << endl;
	}	

	cout << endl;
	
//------------------------------------------------------------------------------------------------------------------------//

	string przyslowie {"Siala baba mak, nie wiedziala jak"}	;
	
	for (auto znak : przyslowie)	//	"string" jest wektorem char-ów.
	{								//	Tak skonstruowana pêtla bêdzie przeskakiwaæ po kolejnych elementach tego wektora.
		cout << znak << "-";
	}

//------------------------------------------------------------------------------------------------------------------------//	
	
	getch();
	return 0;
}
