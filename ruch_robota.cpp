
#include "h.h"

//--------------------------------------------------------------------------//

void delay (int ile);

void menu();

void lewo();
void prawo();
void podnies();
void opusc();
void zacisnij();
void luzuj();
void koniec();

//--------------------------------------------------------------------------//

int main()
{
	void (*tab_wsk[21])();  //  Czyli: tab_wsk jest tabela wskaznikow do funkcji, ktore nie przyjmuja argumentow i zwracaja void.
	int indeks;
	int wybor;
	int czy_dalej;

while(1)				//  Zaczynamy petle nieskonczona - patrz linijka 109...
{
	indeks=0;
	wybor=0;
	INIC (tab_wsk, 21);

	ENDL;
	COUT " PROGRAMATOR ROBOTA PRZEMYSLOWEGO\n\n";

	menu();



	for ( ; indeks<20 ; indeks++)	//  Wykonuj, az nie dojdziesz do elementu tablicy nr 20 (on zawsze ma miec adres funkcji "koniec").
	{
		COUT " Operacja nr " << indeks+1 << " ---> ";	//  Uzytkownik wprowadza wartosc int.
		CIN wybor;										//

		while ((wybor!=0)and(wybor!=1)and(wybor!=2)and(wybor!=3)and(wybor!=4)and(wybor!=5)and(wybor!=6))	//  Sprawdzam, czy uzytkownik
		{																									//  wprowadzil wlasciwa wartosc.
			COUT " Wpisales zla wartosc.\n";																//
			ENDL;																							//
			COUT " Operacja nr " << indeks+1 << " ---> ";													//
			CIN wybor;																						//
		}																									//

		switch (wybor)							//  W zaleznosci od wyboru uzytkownika
		{										//  przypisuje odpowiedniemu miejscu w tabeli
			case 0:								//  adres odpowiadajacej funkcji.
				tab_wsk[indeks] = &koniec;		//
				break;							//

			case 1:								//
				tab_wsk[indeks] = &lewo;		//
				break;							//

			case 2:								//
				tab_wsk[indeks] = &prawo;		//
				break;							//

			case 3:								//
				tab_wsk[indeks] = &podnies;		//
				break;							//

			case 4:								//
				tab_wsk[indeks] = &opusc;		//
				break;							//

			case 5:								//
				tab_wsk[indeks] = &zacisnij;	//
				break;							//

			case 6:								//
				tab_wsk[indeks] = &luzuj;		//
				break;							//
		}

		if (wybor==0) break;					//  Jesli uzytkownik wybral 0, zostal juz przypisany adres funkcji "koniec".
												//  Nie potrzeba, by uzytkownik wprowadzal kolejne wartosci. Wyskakujemy z petli.
	}

	ENDL;
	delay (1000);
	COUT " Zakonczono wprowadzanie instrukcji.\n\n";
	delay (1000);

	COUT " Uruchomic program?\n\n"
	  << " 1 - Tak\n"
	  << " 2 - Wpisz od nowa\n"
	  << " 0 - Zamknij\n\n"
	  << " Wybor? ---> ";

	  CIN czy_dalej;

	while ((czy_dalej!=0)and(czy_dalej!=1)and(czy_dalej!=2))	//  Sprawdzam, czy uzytkownik
	{															//  wprowadzil wlasciwa wartosc.
		COUT " Wpisales zla wartosc.\n";						//
		ENDL;													//
		COUT " Wybor? ---> ";									//
		CIN czy_dalej;											//
	}															//

	if ((czy_dalej==1) or (czy_dalej==0)) break;	//  Wyskakujemy z petli tylko, jesli uzytkownik
}													//  wybral 1 lub 0.



if (czy_dalej==1)
{
	ENDL;
	delay (1000);

	{
		for (int xxx=0; xxx<21 ; xxx++)
		{
			tab_wsk[xxx]();
			if (tab_wsk[xxx]==&koniec) break;
		}
	}


}
	COUT "\n--- Program zakonczyl sie. Nacisnij dowolny przycisk, aby kontynuowac. ---";
	PAUSE;
}
//--------------------------------------------------------------------------//
void delay (int ile)
{
	for (int i=0 ; i<ile*700000; i++)
	{

	}
}
//--------------------------------------------------------------------------//
void menu()
{

    COUT " Wprowadz kolejne instrukcje (max. 20). \n"
	  << " Kazda instrukcje zatwierdz przyciskiem 'Enter'.\n\n"
	  << " 1 - Obroc ramie w lewo.\n"
	  << " 2 - Obroc ramie w prawo.\n"
	  << " 3 - Podnies ramie.\n"
	  << " 4 - Opusc ramie.\n"
	  << " 5 - Zacisnij uchwyt.\n"
	  << " 6 - Poluzuj uchyt.\n"
	  << " 0 - Zakoncz prace robota.\n\n";

}
//--------------------------------------------------------------------------//
void lewo ()
{
	COUT " *OBRACAM RAMIE W LEWO...*\n";
	delay(1000);
}
//--------------------------------------------------------------------------//
void prawo ()
{
	COUT " *OBRACAM RAMIE W PRAWO...*\n";
	delay(1000);
}
//--------------------------------------------------------------------------//
void podnies()
{
	COUT " *PODNOSZE RAMIE...*\n";
	delay(1000);
}
//--------------------------------------------------------------------------//
void opusc()
{
	COUT " *OPUSZCZAM RAMIE...*\n";
	delay(1000);
}
//--------------------------------------------------------------------------//
void zacisnij()
{
	COUT " *ZACISKAM UCHWYT...*\n";
	delay(1000);
}
//--------------------------------------------------------------------------//
void luzuj()
{
	COUT " *LUZUJE UCHWYT...*\n";
	delay(1000);

}
//--------------------------------------------------------------------------//
void koniec()
{
	COUT " Koniec programu.\n";
	delay(1000);
}
//--------------------------------------------------------------------------//
