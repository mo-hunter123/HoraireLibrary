#include "pch.h"
#include "Heure.h"
#include <iostream>
#include <assert.h>

using namespace Agenda;
using namespace std;

int Heure::objCounter = 0;


Agenda::Heure::Heure(int H, int M, int S)
{
	(0 <= H && H < 24) ? this->H = H : this->H = 0;
	(0 <= M && M < 60) ? this->M = M : this->M = 0;
	(0 <= S && S < 60) ? this->S = S : this->S = 0;

	objCounter++;
}

Agenda::Heure::Heure(const Heure& H)
{
	if (this != &H) {
		this->H = H.H; 
		this->M = H.M; 
	}
}

void Agenda::Heure::operator=(const Heure& H)
{

}

void Agenda::Heure::PrintHoraire() const
{
	cout << this->H << ":" << this->M << ":" << this->S << endl;
}

bool Agenda::Heure::operator>(const Heure& H) const
{
	if (this->H != H.H)
		return this->H > H.H;

	else if (this->M != H.M)
		return this->M > H.M;
	else
		return this->S > H.S;

}

