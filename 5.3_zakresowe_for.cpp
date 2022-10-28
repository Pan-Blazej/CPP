#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	
//------------------------------------------------------------------------------------------------------------------------//

	vector <double> liczby { 3.14, 4.4, -6.6, 7.7};		//  Wektor (tabela) liczb double.
	
	for (auto i : liczby)	//  Tworzymy zmienn� "i", przyjmuj�c� kolejne warto�ci z tabeli "liczby".
	{						//  Jest ona typu automatycznie rozpoznanego.
		cout << i << endl;
	}
	
	cout << endl;
	
	for (auto &i : liczby)	//  Teraz chc� zmodyfikowa� warto�ci w wektorze. Tworz� p�tl� operuj�c� na referencji.
	{
		i = 1;
	}
	
	for (auto i : liczby)
	{
		cout << i << endl;
	}
	
	cout << endl;
	
	for (auto i : liczby)	//  Sprawd�my, jak si� zachowa bez ampersand.
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
	
	for (auto znak : przyslowie)	//	"string" jest wektorem char-�w.
	{								//	Tak skonstruowana p�tla b�dzie przeskakiwa� po kolejnych elementach tego wektora.
		cout << znak << "-";
	}

//------------------------------------------------------------------------------------------------------------------------//	
	
	getch();
	return 0;
}
