#pragma once

#include <iostream>
namespace Agenda {
	class Heure
	{
	public: 
		static int objCounter;
	protected:
		int H;
		int M;
		int S;

	public:
		Heure(int H, int M, int S);
		Heure(const Heure& H); 
		void operator=(const Heure& H);
		void PrintHoraire() const;
		bool operator>(const Heure& H) const;

	};
}
