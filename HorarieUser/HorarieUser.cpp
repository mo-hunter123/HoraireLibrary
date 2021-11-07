#include <iostream>
#include "DateH.h"
#include "Heure.h" 

using namespace std;
using namespace Agenda;

int main()
{
	Heure* H1 = new Heure(23, 40, 12);
	DateH* D1 = new DateH(23, 40, 12, 35, 12, 2010);

	Heure H2 = Heure(23, 45, 13); 
	if (H2 > *H1)
		cout << "L'operateur fonctionne bien " << endl; 

	D1->PrintHoraire();

	cout << DateH::isLeapYear(2020) << endl; // since we can't access private data of A DateH instance 

	cout << "Number of created objects: " << Heure::objCounter << endl; 
	cout << endl;
}

