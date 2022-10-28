#include "h.h"

 int     sumator    (int jeszcze_krokow, int suma_dotychczas);
 void    dwojkowo   (int iczba);
 void   schodki     (int ile, char znak);

// -------------------------------------------------------------------------- //

int main()
{
    int n;

    COUT "\n Sumowanie liczb naturalnych od 0 do n."
      << "\n Podaj n: ";

      CIN n; ENDL;

      int suma = sumator(n, 0);

      COUT "\n Suma = " << suma << endl;
      ENDL;

      COUT "\n /-------------------------------------------------/";
      ENDL;

      COUT "\n DEC to BIN."
        << "\n Podaj jakas liczbe: ";

      CIN n; ENDL;

      COUT " " << n << " (DEC) = ";

      dwojkowo(n);

      COUT " (BIN).";

    PAUSE;
}

// -------------------------------------------------------------------------- //

 int     sumator    (int jeszcze_krokow, int suma_dotychczas)
 {
     int            rezultat {};
     static int     krok_rekurencji;

     int            nr_pietra = krok_rekurencji;

     krok_rekurencji++;

     schodki(nr_pietra, '>');

     COUT " " << suma_dotychczas << " + " << nr_pietra << " = " << (suma_dotychczas + nr_pietra) << endl;

     suma_dotychczas += nr_pietra;

    if (jeszcze_krokow)
    {
        rezultat = sumator (jeszcze_krokow-1, suma_dotychczas);

    } else
    {
        COUT "\n ......to ostatni krok, wracamy......\n\n";
        rezultat = suma_dotychczas;
    }

    schodki (nr_pietra, '<'); ENDL;

    krok_rekurencji--;

    return rezultat;
}

 // -------------------------------------------------------------------------- //

 void    dwojkowo   (int liczba)
 {
    int reszta = liczba % 2;

    if (liczba)
    {
        dwojkowo(liczba/2);
    }

    COUT reszta;
 }

 // -------------------------------------------------------------------------- //

 void   schodki     (int ile, char znak)
 {
     COUT " " << ile << ". pietro: ";

     for (int i=0 ; i<ile ; i++)
     {
         COUT znak << " ";
     }

 }

// -------------------------------------------------------------------------- //
