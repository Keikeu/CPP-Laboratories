#pragma once
#include "Urzadzenie.h"

#include <string>
#include <iostream>

using namespace std;


class Ksero : public virtual Urzadzenie
{
public:
    string rodzaj() const { return "Ksero"; }
private:

};