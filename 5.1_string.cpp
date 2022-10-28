#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string pierwszy {"jakis tam napis "};
	string drugi {"jakis inny napis "};

	float liczba;

	cout << "Podaj jakas liczbe float: ";
	cin  >> liczba;

	pierwszy += drugi;
	pierwszy += to_string(liczba);

	cout << pierwszy;

	liczba += pierwszy.size();


	getch();
	return 0;
}
