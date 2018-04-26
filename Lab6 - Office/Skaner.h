#pragma once
#include "Urzadzenie.h"
#include "Rozdzielczosc.h"
#include <string>
#include <iostream>

using namespace std;


class Skaner : public virtual Urzadzenie
{
public:
    Skaner(Rozdzielczosc res) : m_res(res){};
    string rodzaj() const { return "Skaner"; }
    Rozdzielczosc rozdzielczosc() const { return m_res; }
private:
    Rozdzielczosc m_res;
};