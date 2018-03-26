#pragma once
#include <iostream>
#include <string>

#include "Pojazd.h"
#include "Silnik.h"

class Silnik;

using namespace std;


class Samochod : public Pojazd
{
public:
	// konstruktor tworzący pojazd o podanych parametrach i 4 kołach
    Samochod(Silnik & silnik, string name, float licznik) : Pojazd(silnik, name, licznik, 4) {};
};
