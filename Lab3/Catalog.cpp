#include "Catalog.h"
#include <string>
#include <iostream>

using namespace std;

void Catalog::Print()
{
    cout << "Catalog::name " << m_name << endl;
    for(int i=0; i<m_number; i++)
        cout << "Catalog::book(" << i << ") " << m_books[i]->getTitle() << endl;
}

