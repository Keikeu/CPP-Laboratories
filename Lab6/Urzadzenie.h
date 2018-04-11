#pragma once

#include <string>
#include <iostream>

using namespace std;

class Urzadzenie
{
public:
    virtual ~Urzadzenie() {};
    virtual string rodzaj() const {}

private:

};