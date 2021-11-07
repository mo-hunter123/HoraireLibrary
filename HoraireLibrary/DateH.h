#pragma once
#include "Heure.h"

using namespace std;

// ajouter un compteur d'objet 
namespace Agenda {
	class DateH :public Heure
	{
	

	private:
		int Jours;
		int Mois;
		int Annee;

	public:
		DateH(int H, int M, int S, int Jour, int Mois, int Annee);
		DateH(const DateH& D); 
		void PrintHoraire() const;
		bool operator>(const DateH& D);
		static int NbJourMax(int Annee, int Mois);
		static bool isLeapYear(int Annee);

	};
}

