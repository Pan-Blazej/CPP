#include "h.h"

// -------------------------------------------------------------------------- //

constexpr long long silnia (int n)
{

    return (n > 1) ? n * silnia(n-1) : 1;

    return n;
}

// -------------------------------------------------------------------------- //

int main()
{
    constexpr long long silnia14 = silnia(14);

    COUT "\n Silnia: 14! = " << silnia14;


    PAUSE;
}
