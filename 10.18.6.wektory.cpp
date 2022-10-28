// ----------------------------  INCLUDE  ----------------------------------- //


#include "h.h"
#include <iomanip>
#include <vector>


// ------------------------------  FUNKCJE  --------------------------------- //


void pokaz_wektor_2d (vector <vector <int> > tabl, string opis);


// --------------------------------  MAIN  ---------------------------------- //


int main()
{


// ---------------------  Wektor wstepnie zainicjalizowany:  ---------------- //


    vector < vector <int> >  w1
    {
        { 0,  1,  2  },
        { 10, 11, 12 }

    };

    pokaz_wektor_2d(w1, "Vector w1");


// ----------------------  Wektor bez inicjalizacji:  ----------------------- //


    vector <vector <int> >  w2;

    pokaz_wektor_2d(w2, "Vector w2 przed inicjalizacja");

    w2.resize(2);

    pokaz_wektor_2d(w2, "Vector w2 po dodaniu 2 rzedow");

    for (int i=0 ; i<2 ; i++)
    {
        w2[i].resize(3);

        for (int g=0 ; g<w2[i].size() ; g++)
        {
            w2[i][g] = 10*i + g;
        }
    }

    pokaz_wektor_2d(w2, "Vector w2 po wprowadzeniu wartosci");


// ---------------  Wektor inicjalizowany za pomoca push_back:  ------------- //

    vector <vector <int> >  w3;

//  Chce dopiac do konca tego wektora 1 element.
//  Elementami tego vectora sa wektory <int>.
//  Musze wiec stworzyc taki wektor i wtedy go dopiac.

    for (int i=0 ; i<2 ; i++)
    {
        vector <int> dopinany_rzad;     //  Tworze roboczy wektor "dopinany_rzad"

        w3.push_back(dopinany_rzad);    //  Dopinam go do konca wektora "w3" jako ostatni element

        for (int u=0 ; u<3 ; u++)       //  W kazdym takim dopietym 1d wektorze
        {
            w3[i].push_back(i*10 + u);  //  dopinam kilka int-ow.
        }
    }

    pokaz_wektor_2d(w3, "Vector w3 po wprowadzeniu wartosci");


// -------------------------------------------------------------------------- //


    PAUSE;
}


// -------------------------------------------------------------------------- //


void pokaz_wektor_2d (vector <vector <int> > tabl, string opis)     //  Argumenty : wektor wektorow typu 'int',
{                                                                   //              string z opisem.
    COUT endl << " " << opis << " ma rzedow: " << tabl.size() << endl;  //  tabl.size()  -->  rozmiar tablicy. W tym wypadku: ilosc rzedow.

    for (int i=0 ; i<tabl.size(); i++)
    {
        COUT " Rzad nr " << i << " ma elementow: " << setw(2) << tabl[i].size() << " ---> |";

        for (int g=0 ; g<tabl[i].size() ; g++)
        {
            COUT setw(4)
         << tabl[i][g]
         << " | ";
        }

        ENDL;
    }

}


// -------------------------------------------------------------------------- //
