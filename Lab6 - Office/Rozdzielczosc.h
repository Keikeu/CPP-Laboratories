#pragma once

#include <string>
#include <iostream>

using namespace std;

class Rozdzielczosc
{
public:
    Rozdzielczosc(int a, int b) : m_a(a), m_b(b) {}
    friend ostream& operator << (ostream& os, const Rozdzielczosc& toPrint);
private:
    int m_a, m_b;
};


ostream& operator << (ostream& os, const Rozdzielczosc& toPrint)
{
    os << toPrint.m_a << "x" << toPrint.m_b;
    return os;
}