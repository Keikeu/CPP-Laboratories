#include <iostream>
#include <string>

#include "Pojazd.h"

using namespace std;

ostream & operator << (ostream &os, Pojazd &pojazd)
{
    os << endl << "Liczba kol " << pojazd.m_kola << endl << "Stan licznika " << pojazd.m_licznik << " [km]\n" << "Kolor " << pojazd.m_kolor << endl;
    return os;
}

Pojazd& Pojazd::operator = (Pojazd& merc)
{
	this->m_silnik = merc.m_silnik;
	this->m_kolor = merc.m_kolor;
	this->m_licznik = 0;
	this->m_kola = merc.m_kola;

	return *this;
}
