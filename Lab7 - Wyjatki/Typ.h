#pragma once

using namespace std;


class Typ
{
public:
    // metoda wspolna dla kazdego typu - wypisuje typ i adres obiektu
    virtual void PrzedstawSie() {}
    // zwraca numer typu obiektu
    virtual int GetTyp() = 0;
    // destruktor domyslny, zwalnia pamiec kazdego typu
    virtual ~Typ() {};
};

