#pragma once

#include <iostream>


class Ksztalt
{
public:
	Ksztalt();
	//Ksztalt(Kwadrat k);
	void wypisz(std::ostream&) const;
	float polePow() const;

};



class Kwadrat
	:public Ksztalt
{
public:
	Kwadrat(int bok);
	int bok();


private:
	int m_bok;

};

void wypisz(Ksztalt& ksz);
void wypisz(Kwadrat k);
