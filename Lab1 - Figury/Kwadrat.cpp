#include "Kwadrat.h"
#include <iostream>

Kwadrat::Kwadrat(int bok) : m_bok(bok) {}

int Kwadrat::bok() { return m_bok; }

void wypisz(Kwadrat k)
{
	std::cout << "Kwadrat o boku:" << k.bok() << std::endl;
}

//===========================================

Ksztalt::Ksztalt() {}

void wypisz(Ksztalt& ksz)
{
	//wypisz(ksz);
	std::cout << "hejka" << std::endl;
}


void Ksztalt::wypisz(std::ostream&) const
{
	std::cout << "aha" << std::endl;
}

float Ksztalt::polePow() const
{
	return 12345;
}



