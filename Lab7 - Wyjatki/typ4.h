#pragma once

#include <iostream>

using namespace std;

class typ4 : public Typ
{
public:
    typ4() {}
    void PrzedstawSie() { cout << "Nazywam sie " << GetTyp() << " (adres obiektu: " << this << endl; }
    int GetTyp() { return m_typ; }
private:
    int m_typ = 4;
};
