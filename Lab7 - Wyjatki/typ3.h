#pragma once

#include <iostream>

using namespace std;

class typ3 : public Typ
{
public:
    typ3() {}
    void PrzedstawSie() { cout << "Nazywam sie " << GetTyp() << " (adres obiektu: " << this << endl; }
    int GetTyp() { return m_typ; }
private:
    int m_typ = 3;
};