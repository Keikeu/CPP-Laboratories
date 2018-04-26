#pragma once

#include "MyExceptions.h"
#include "MyClass.h"

#include <iostream>
#include <string>

using namespace std;

int ReturnValueID;



void MyTerminate()
{
    cout << "--- UWAGA: blad mechanizmu wyjatkow ---" << endl;
    exit(1);
}


   // std::string s_level = std::to_string(level);
   // my_class.SetName(" F"+s_level);
   // std::cout<<"Entering fold level "<<level<<std::endl;


void Fold2(MyClass* d);
void Fold3(MyClass* d);

void Fold1(MyClass* d)
{

    set_terminate(MyTerminate);

    MyClass new_d (*d);
    new_d.setName(" F1");


    cout << "Entering fold level 1" << endl;

    Fold2(&new_d);

    return; //
}

void Fold2(MyClass* d)
{

    MyClass new_d (*d);
    new_d.setName(" F2");


    cout << "Entering fold level 2" << endl;

    Fold3(&new_d);

    return; //
}

void Fold3(MyClass* d)
{

    MyClass new_d (*d);
    new_d.setName(" F3");


    cout << "Entering fold level 3" << endl;

    try
    {
        // float
        if(ReturnValueID==0)
            throw 9.242f;
        // int
        if(ReturnValueID==1)
            throw -87;
        // unsigned
        if(ReturnValueID==2)
            throw 16u;
        // double
        if(ReturnValueID==3)
            throw 3.14157;
    }

    catch(unsigned& u)
    {
        cout << "Caught an exception of type: unsigned" << endl;
        throw MyException();
    }
    catch(int& i)
    {
        cout << "Caught an exception of type: int" << endl;
        throw MyException();
    }
    catch(float& f)
    {
        cout << "Caught an exception of type: float" << endl;
        throw MyException();
    }
    catch(double& d)
    {
        cout << "Caught an exception of type: double" << endl;
        throw MyException();
    }

    
}

