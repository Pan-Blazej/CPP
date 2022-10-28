#include "h.h"

 void przedzielacz_tab (const char tab[]);
 void przedzielacz_wsk (const char* w);
 
// -------------------------------------------------------------- // 
 
 main()
 {
 	char wiadomosc[80] = { "Alarm trzeciego stopnia"};
 	
 	ENDL;
 	
 	COUT " Wersja tablicowa: \t";
 	przedzielacz_tab(wiadomosc);
 	ENDL;
 	
 	ENDL;
 	
 	COUT " Wersja wskaznikowa: \t";
 	przedzielacz_wsk(wiadomosc);
 	ENDL;
 	
 	PAUSE; 	
 }
 
// -------------------------------------------------------------- //
void przedzielacz_tab (const char tab[])
{	
	int k=0;
	
	while (tab[k])
	{
		COUT tab[k++] << "-";
	}
	
}
// -------------------------------------------------------------- //
void przedzielacz_wsk (const char* w)
{
	while (*w)
	{
		COUT *(w++) << "-";
	}
	
}
// -------------------------------------------------------------- //
