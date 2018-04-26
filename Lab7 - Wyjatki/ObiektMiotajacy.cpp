#include "Main.h"

#include <iostream>

using namespace std;

void ObiektMiotajacy::Rzuc() 
{
    delete this;
    typ1* wyjatek = new typ1();
    throw(wyjatek);
}

void Przetworz(Typ* obiekt)
{
    cout << "Przetworz - wyjatek typu " << obiekt->GetTyp()<< " o adresie: " << obiekt << endl;
    delete obiekt;
    typ4* wyjatek = new typ4();
    throw(wyjatek);
}
