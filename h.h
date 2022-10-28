#ifndef NAGLOWEK                              //  rev. 2022_09_25_
 #define NAGLOWEK


 #include <conio.h>
 #include <iostream>
 using namespace std;



 #define    COUT        cout <<
 #define    CIN         cin >>

 #define    ENDL        COUT endl;

 #define    PAUSE       ENDL getch(); return 0

 #define    CLRSCR      system ("cls")




 #define    POKAZ(x)    COUT "\n " << #x << " = " << (x)



 #define    POKAZ_T(x,ile) 							        \
                                                            \
    for (int i=0 ; i<ile ; i++ ) 	                        \
	{ 												        \
        COUT "\n " << #x << "[" << i << "] = " << x[i];     \
	}                                                       \




 #define    INIC(tablica,rozmiar)					\
 {													\
	for (int i=0 ; i<rozmiar ; i++ )				\
	{												\
		tablica[i] = 0;								\
	}												\
 }



#endif // NAGLOWEK
