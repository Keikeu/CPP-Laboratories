#pragma once

using namespace std;

#include <string>

class MyException;

class MyClass
{
public:
    MyClass(string name);
    MyClass(const MyClass& toCopy);
    void setName(string name) { m_name = name; }
    ~MyClass();
private:
    string m_name;
};






