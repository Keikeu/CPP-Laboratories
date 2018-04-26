#pragma once

#include "Kwadrat.h"


class Trojkat
	: public Ksztalt
{
public:
	Trojkat(int a, int b, int c);
	int a();
	int b();
	int c();

private:
	int m_a, m_b, m_c;

};


void wypisz(Trojkat t);
