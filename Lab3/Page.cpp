#include "Page.h"
#include <string>
#include <iostream>

using namespace std;

Page* Page::Copy()
{
    Page* newPage = new Page();
    newPage->AddHeader(m_header);
    newPage->AddText(m_text);

    return newPage;
}

void Page:: Print()
{
    cout << "Page::header " << m_header << endl;
    cout << "Page::text " << m_text << endl;
    cout << endl;
}
