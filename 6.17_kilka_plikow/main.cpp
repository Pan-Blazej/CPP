#include "nagl.h"

// -------------------------------------------------------------------------- //

int main()
{
    int i;
    bool czy_dalej;


    menu();


// -------------------- Petla nieskonczona - start -------------------------- //

while(1)
{
    czy_dalej=false;

    while (!czy_dalej)
    {
        COUT "\n\n Wybor: ";
        CIN i;

        czy_dalej = WYBOR(i, dozwolone_opcje);

        if (!czy_dalej) COUT "\n Niewlasciwy wybor.";
    }

    switch (i)
    {
        case 1:
            if  (ile_stali>2)   zbuduj_robota();
            else                COUT "\n Za malo stali!";
            break;

        case 2:
            if  (ile_drewna>3)  postaw_budynek();
            else                COUT "\n Za malo drewna!";
            break;

        case 3:
            if  (ile_zboza>1)   zwerbuj_rekruta();
            else                COUT "\n Za malo zboza!";
            break;

        case 4:
            if  (ile_ropy>1)    kup_ulepszenie();
            else                COUT "\n Za malo ropy!";
            break;

        case 8:
            pokaz_zasoby();
            break;
    }

    if (i==9) break;

}

// ---------------------- Petla nieskonczona - koniec ----------------------- //

	PAUSE;
}

