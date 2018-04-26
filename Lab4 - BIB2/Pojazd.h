#pragma once
#include <iostream>
#include <string>

#include "Silnik.h"

using namespace std;

class Silnik;

class Pojazd
{
public:
	// konstruktor definiujący właściwości pojazdu na podstawie podanych parametrów
    Pojazd(Silnik& silnik, string kolor, float licznik, int kola) : m_silnik(silnik), m_kolor(kolor), m_licznik(licznik), m_kola(kola) {};

	// konstruktor definiujący niektóre właściwości pojazdu - ustawia licznik na 0, jeśli inna wartość nie została podana
    Pojazd(Silnik& silnik, float licznik = 0.0) : m_silnik(silnik), m_licznik(licznik) {};

	// konstruktor kopiujący - kopiuje właściwości pojazdu i zeruje licznik
    Pojazd(Pojazd &toCopy) : m_silnik(toCopy.m_silnik), m_kolor(toCopy.m_kolor), m_licznik(0), m_kola(toCopy.m_kola) {};

	// konstruktor domyślny
    Pojazd() {};

	// metoda nadająca podaną wartość polu m_licznik
	void Przebieg(float przebieg) { m_licznik = przebieg; }

	// przeładowanie operatora wypisania - wypisuje liczbę kół, stan licznika i kolor
    friend ostream & operator<<(ostream &os, Pojazd &pojazd);

	// przeładowanie operatora przypisania - kopiuje wszystkie parametry i zeruje licznik
	Pojazd& operator = (Pojazd& merc);


private:
	// właściwości pojazdu - silnik, kolor, licznik i liczba kół

    Silnik m_silnik;
    string m_kolor;
    float m_licznik;
    int m_kola;
};


ostream & operator << (ostream &os, Pojazd &pojazd);



