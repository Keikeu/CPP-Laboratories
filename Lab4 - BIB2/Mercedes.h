#pragma once
#include <iostream>
#include <string>

#include "Pojazd.h"

class Silnik;


using namespace std;

class Mercedes : public Pojazd
{
public:
	// konstruktor tworzący samochód z podanym silnikiem, wyzerowanym licznikiem i o odpowiednim kolorze
    Mercedes(Silnik& silnik, float licznik = 0.0, string kolor = "czarny metalic") : Pojazd(silnik, kolor, licznik, 4){};

	// konstruktor domyślny
	Mercedes() {};
};
