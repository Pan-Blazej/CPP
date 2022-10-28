#include "h.h"

// -------------------------------------------------------------------------- //
// Zmienne

int ile_stali = 10;
int ile_ropy = 10;
int ile_zboza = 10;
int ile_drewna = 10;
int dozwolone_opcje[6] = {1, 2, 3, 4, 8, 9};

// -------------------------------------------------------------------------- //
// Ramka z linia. Wywolywana bez argumentu: ramka();

void ramka()
{
	COUT "\n --------------------------------";
}

// -------------------------------------------------------------------------- //
// Pusta ramka. Wywolywana z liczba (obojetnie jaka), np. ramka(0);

void ramka(int ile)
{
	COUT "\n |                              |";
}

// -------------------------------------------------------------------------- //
// Ramka z tekstem. Wywolywana np. ramka("jakis tam tekst");

void ramka(string tekst)
{

	COUT "\n                                |\r |" << tekst;
}

// -------------------------------------------------------------------------- //
// Pokaz obecny stan zasobow.

void pokaz_zasoby()
{
	ramka();
	ramka (0);
	ramka (" Stal   : ");   COUT ile_stali;
	ramka (" Drewno : ");   COUT ile_drewna;
	ramka (" Zboze  : ");   COUT ile_zboza;
	ramka (" Ropa   : ");   COUT ile_ropy;
	ramka(0);
	ramka();
    ENDL;
}

// -------------------------------------------------------------------------- //

void zbuduj_robota()
{
    ramka();
    ramka(0);
    ramka (" Buduje robota. ");
    ramka (" Ilosc stali -3. "); ile_stali -= 3;
	ramka (0);
	ramka();
	ENDL;
}

// -------------------------------------------------------------------------- //

void postaw_budynek()
{
    ramka();
    ramka(0);
    ramka (" Stawiam budynek. ");
    ramka (" Ilosc drewna -4. "); ile_drewna -= 4;
	ramka (0);
	ramka();
	ENDL;

}

// -------------------------------------------------------------------------- //

void zwerbuj_rekruta()
{
    ramka();
    ramka(0);
    ramka (" Werbuje rekruta. ");
    ramka (" Ilosc zboza -2. "); ile_zboza -= 2;
	ramka (0);
	ramka();
	ENDL;
}

// -------------------------------------------------------------------------- //

void kup_ulepszenie()
{
    ramka();
    ramka(0);
    ramka (" Kupuje ulepszenie. ");
    ramka (" Ilosc ropy -2. "); ile_ropy -= 2;
	ramka (0);
	ramka();
	ENDL;

}

// -------------------------------------------------------------------------- //

void menu()
{
    ramka();
    ramka(0);
    ramka (" Wybierz opcje: ");
    ramka(0);
    ramka (" 1 - Zbuduj robota");
    ramka (" 2 - Postaw budynek");
    ramka (" 3 - Zwerbuj rekruta");
    ramka (" 4 - Kup ulepszenie");
    ramka(0);
    ramka (" 8 - Pokaz zasoby");
    ramka(0);
    ramka (" 9 - Zakoncz program");
    ramka(0);
    ramka();
	ENDL;
}

// -------------------------------------------------------------------------- //

bool WYBOR (int x, int tabela[])
{
    bool rezultat = false;
    int i = 0;

    while(1)
    {
        if (tabela[i] == NULL) break;

        if (tabela[i] == x) rezultat = true;

        i++;
    }

    return rezultat;
}
