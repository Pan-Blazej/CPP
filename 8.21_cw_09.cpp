#include "h.h"

int main()
{
	
	char 	obj;
	char 	*wch1;
	char 	*wch2;
	double 	*wd;
	
	wch1 = &obj;
	
	wch2 = wch1;
	
	wd = reinterpret_cast <double*> (wch2);
	
	
	
	COUT "wch1 = " << reinterpret_cast <long long int> (wch1) << "\n";
	COUT "wch2 = " << reinterpret_cast <long long int> (wch2) << "\n";
	COUT "  wd = " << reinterpret_cast <long long int> (wd) << "\n";
	
	PAUSE;
}