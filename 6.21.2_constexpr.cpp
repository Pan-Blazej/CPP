#include "h.h";

// -------------------------------------------------------------------------- //

constexpr double    miles_to_km (double mi)
{
    return (mi*1.609344);
}

// -------------------------------------------------------------------------- //

main()
{
    ENDL;

    COUT " Buty 7-milowe to inaczej buty " << miles_to_km(7) << "-kilometrowe.\n\n";

    constexpr double    mile = 2614;
    constexpr double    km   = miles_to_km(mile);

    COUT " Odleglosc Paryz - Dakar to " << mile << " mil, czyli " << km << " kilometrow.";


    PAUSE;
}

// -------------------------------------------------------------------------- //
