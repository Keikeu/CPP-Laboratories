#pragma once


#include "Kwadrat.h"

class Kolo
	:public Ksztalt
{
public:
	Kolo(int promien);
	int promien();
private:
	int m_promien;

};



void wypisz(Kolo ko);
