#pragma once


using namespace std;

// klasa definiujaca wyjatki
class ObiektMiotajacy
{
public:
    // rzuca wyjatkiem typu 1
    void Rzuc();
};

// informuje o typie i adresie obiektu oraz rzuca wyjatkiem typu 4
void Przetworz(Typ* obiekt);
