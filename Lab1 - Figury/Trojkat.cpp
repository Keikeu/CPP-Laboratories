#include "Trojkat.h"
#include "Kwadrat.h"
#include <iostream>

Trojkat::Trojkat(int a, int b, int c) : m_a(a), m_b(b), m_c(c) {}

int Trojkat::a() { return m_a; }
int Trojkat::b() { return m_b; }
int Trojkat::c() { return m_c; }


void wypisz(Trojkat t)
{
	std::cout << "Trojkat bokach:" << t.a() << " " << t.b() << " " << t.c() << std::endl;
}




