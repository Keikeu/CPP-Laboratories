#pragma once
#include <iostream>
#include <string>

#include "Pojazd.h"


using namespace std;

class Motorower : public Pojazd
{
public:
	// konstruktor tworzący pojazd o podanych parametrach i 2 kołach
    Motorower(Silnik silnik, string kolor, float licznik) : Pojazd(silnik, kolor, licznik, 2) {};
};
