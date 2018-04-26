#include "MyClass.h"

#include <iostream>
#include <string>

using namespace std;

MyClass::MyClass (string name)
{
    m_name = name;
    cout << "Created MyClass:" << m_name << endl;
}

MyClass::MyClass(const MyClass& toCopy)
{
    m_name = toCopy.m_name;
    cout << "Copy created MyClass:" << m_name << endl;
}

MyClass::~MyClass()
{
    cout << "Destroyed MyClass:" << m_name << endl;
}
