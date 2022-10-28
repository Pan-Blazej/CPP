#include "h.h";

constexpr double pi = 3.14;

constexpr double pole_kola (double r)
{
    return pi * r * r;
}

// -------------------------------------------------------------------------- //

main()
{

    constexpr double promien = 15;

    constexpr double pole = pole_kola(promien);

    PAUSE;
}

// -------------------------------------------------------------------------- //

/*

 Zmienne 'constexpr' musza miec wartosc znana juz w momencie kompilacji.

 Funkcja 'constexpr' moze operowac tylko na zmiennych 'constexpr'.

 Takie zmienne i funkcje obliczaja sie jeszcze na etapie kompilacji
 i nie spowalniaja dzialania programu.

*/
