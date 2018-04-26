#pragma once
#include <iostream>
#include <string>

#include "Pojazd.h"

class Silnik;


using namespace std;


class Romet : public Pojazd
{
public:
	// konstruktor tworzący motorower z podanym silnikiem, wyzerowanym licznikiem i o odpowiednim kolorze
    Romet(Silnik& silnik, float licznik = 0.0, string kolor = "czerwony metalic") : Pojazd(silnik, kolor, licznik, 2) {};
};
