#include "Kolo.h"
#include "Kwadrat.h"
#include <iostream>

Kolo::Kolo(int promien) : m_promien(promien) {}

int Kolo::promien() {return m_promien; }

void wypisz(Kolo ko)
{
	std::cout << "Kolo o promieniu:" << ko.promien() << std::endl;
}

