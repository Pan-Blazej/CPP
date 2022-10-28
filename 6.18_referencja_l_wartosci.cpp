#include "h.h"

// -------------------------------------------------------------------------- //

int & zmienna (int arg);
void wypisz (string tekst, int a);

// -------------------------------------------------------------------------- //

// Zmienne musza byc poza "main" - globalne. Tylko wtedy bedzie do nich miec dostep
// rowniez funkcja "zmienna".

int pierwsza = 801;
int druga    = 802;

// -------------------------------------------------------------------------- //

int main()
{
    int lokalna {};

    COUT "\n\n // -------------------------------------------------------------------- //";

    COUT "\n\n Oto wartosci naszych zmiennych: \n";

    POKAZ (lokalna);
    POKAZ (pierwsza);
    POKAZ (druga);

    COUT "\n\n // -------------------------------------------------------------------- //";

    COUT "\n\n"
      << " Teraz przypisze do \"lokalnej\" wartosc tego,\n"
      << " co znajduje sie w \"pierwszej\":\n";

    lokalna = zmienna(1);

    POKAZ (lokalna);
    POKAZ (pierwsza);
    POKAZ (druga);

    COUT "\n\n // -------------------------------------------------------------------- //";

    COUT "\n\n"
      << " A teraz przypisze do \"drugiej\"\n"
      << " jakas tam liczbe:\n";

    zmienna(2) = 849;

    POKAZ (lokalna);
    POKAZ (pierwsza);
    POKAZ (druga);

    COUT "\n\n // -------------------------------------------------------------------- //";

    PAUSE;
}

// -------------------------------------------------------------------------- //

int & zmienna (int arg)
{
    if (arg == 1)   return pierwsza;
    else            return druga;

}

// -------------------------------------------------------------------------- //
