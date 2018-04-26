#pragma once
#include "Papierozerne.h"
#include "Rozdzielczosc.h"

#include <string>
#include <iostream>

using namespace std;

class Drukarka : public virtual Papierozerne
{
public:
    Drukarka(Rozdzielczosc res) : m_res(res) {}
    virtual string rodzaj() const { return "Drukarka"; }
    Rozdzielczosc rozdzielczosc() const { return m_res; }
private:
    Rozdzielczosc m_res;
};