#pragma once

#include "Rozdzielczosc.h"
#include "Ksero.h"
#include "Drukarka.h"
#include "Skaner.h"

#include <string>
#include <iostream>

using namespace std;


class Wielofunkcyjne : public Ksero, public Drukarka, public Skaner
{
public:
    Wielofunkcyjne(Rozdzielczosc res1, Rozdzielczosc res2) : Drukarka(res1), Skaner(res2) {}
    string rodzaj() const { return "Wielofunkcyjne"; }
private:
};

