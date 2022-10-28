#include "h.h"

// -------------------------------------------------------------------------- //

bool zwykla_funkcja (char pierwszy, char drugi)
{
    COUT " Dziwna sytuacja dla \'" << pierwszy << "\' i \'" << drugi << "\'.";

    return false;
}

// -------------------------------------------------------------------------- //

constexpr bool czy_alfabetycznie (char a, char b)
{
    return a < b ? true : zwykla_funkcja(a, b);
}

// -------------------------------------------------------------------------- //

int main()
{
    constexpr bool  r = czy_alfabetycznie ('a', 'z');

    POKAZ (r);

    int odp = czy_alfabetycznie('z', 'a');

//  constexpr int odp2 = czy_alfabetycznie ('z', 'a');

    PAUSE;
}

// -------------------------------------------------------------------------- //
