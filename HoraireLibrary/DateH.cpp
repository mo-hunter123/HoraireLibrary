#include "pch.h"
#include "DateH.h"
#include <iostream> 
#include <assert.h>
using namespace std;
using namespace Agenda;


DateH::DateH(int H, int M, int S, int Jour, int Mois, int Annee) :Heure(H, M, S)
{
	int NombreJours = NbJourMax(Annee, Mois);

	(0 < Mois && Mois < 13) ? this->Mois = Mois : this->Mois = 1;
	(1900 <= Annee) ? this->Annee = Annee : this->Annee = 1900;
	(0 < Jour && Jour <= NombreJours) ? this->Jours = Jour : this->Jours = 1;

	
}

Agenda::DateH::DateH(const DateH& D) :Heure(D)
{
	if (this != &D) {
		this->Annee = D.Annee; 
		this->Mois = D.Mois; 
		this->Jours = D.Jours; 
	}

}

void DateH::PrintHoraire() const
{
	this->Heure::PrintHoraire();
	cout << this->Annee << "/" << this->Mois << "/" << this->Jours << endl;
}

bool DateH::operator>(const DateH& D)
{
	if (this->Annee != D.Annee)
		return this->Annee > D.Annee;

	else if (this->Mois != D.Mois)
		return this->Mois > D.Mois;

	else if (this->Jours != D.Jours)
		return this->Jours > D.Jours;

	else
		return this->Heure::operator>(D);
}


 
int Agenda::DateH::NbJourMax(int Annee, int Mois)
{
	if (Mois == 2)
	{
		if (isLeapYear(Annee)) return 29;
		else return 28;
	}

	else
		return (Mois % 2 == 0 && Mois > 7 || Mois % 2 != 0 && Mois <= 7) ? 31 : 30;
}

bool Agenda::DateH::isLeapYear(int Annee)
{
	if (Annee % 4 != 0) return false;
	else if (Annee % 100 != 0) return true;
	else if (Annee % 400 != 0) return false;
	else return true;
}
