#pragma once
#include <string>

using namespace std; 

class Silnik
{
public:
	// konstruktor definiujący własności silnika, jeśli nie są podane - ustawia wartości domyślne
	Silnik(int moc = 0, float pojemnosc = 0.0, string paliwo = "empty") : m_moc(moc), m_pojemnosc(pojemnosc), m_paliwo(paliwo) {};

private:
	// własności silnika - moc, pojemność i typ paliwa

	int m_moc;
	float m_pojemnosc;
	string m_paliwo;
};
