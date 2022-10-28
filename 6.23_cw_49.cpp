#include "h.h";

void dwojkowo (int liczba, int krok);

// -------------------------------------------------------------------------- //

main()
{
    int n;

    ENDL;

    COUT " Podaj liczbe: ";
    CIN n;

    ENDL;
    ENDL;

    COUT " " << n << " (DEC) = "; dwojkowo(n, 1);
    COUT " (BIN)";

    PAUSE;
}


// -------------------------------------------------------------------------- //

void dwojkowo (int liczba, int krok)
{
    bool            jestem_w_maksie = false;
    int             reszta = liczba % 2;

    if (liczba)
    {
        dwojkowo (liczba/2, krok+1);
    }
    else jestem_w_maksie = true;

    if (!(krok % 4)) COUT " ";

    if (!jestem_w_maksie) COUT reszta;
}

// -------------------------------------------------------------------------- //
