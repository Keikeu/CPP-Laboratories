#include "Book.h"
#include <string>
#include <iostream>

using namespace std;
Book::Book(string title)
{
    m_author = "anonym";
    m_title = title;
    m_pages[0] = new Page("empty", "Title page");
    m_number = 1;
    m_iterator = 1;
}


void Book::Copy(Book* book)
{
    for(int i=0; i<m_number; i++)
		delete m_pages[i];

    this->m_number = book->m_number;
    this->m_title = book->m_title;
    this->m_author = "(copy) " + book->m_author;
    for(int i=0; i<m_number; i++)
        this->m_pages[i] = book->m_pages[i];
}



void Book::Print()
{
    cout << "Book::author " << m_author << endl;
    for(int i=0; i<m_number; i++)
        cout << "Page(" << i << ")::text " << m_pages[i]->getText() << "(header: " << m_pages[i]->getHeader() << ")" << endl;
    cout << endl;
}


void Book::AddPage(Page *page)
{
    m_pages[m_number] = page->Copy();
    m_number++;
}

void Book::AddTitle(string title)
{
    this->m_title = title;
    m_pages[0]->AddText("Title: " + title);
}
void Book::AddHeader(string header)
{
    for(int i=1; i<m_number; i++)
        m_pages[i]->AddHeader(header);
}
void Book::AddText(string text)
{
    if(m_iterator >= m_number)
        cout << "[ERROR]:: No enough pages in the book!" << endl << endl;
    else
        (m_pages[m_iterator])->AddText(text);

    m_iterator++;
}
