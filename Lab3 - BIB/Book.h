#pragma once

#include "Page.h"
#include <string>

class Page;

using namespace std;

class Book
{
public:
	// konstruktor ustawiający tytuł i autora książki oraz nagłówek i treść pierwszej storny, ustawia liczbę stron i iterator na 1
    Book(string title = "dummy");
	// wypisuje autora książki i wszystkie jej strony(nagłówek i treść)
    void Print();
	// kopiuje jedną książke do drugiej, do nazwy autora dodaje "(copy) "
    void Copy(Book* book);

	// dodaje stronę do książki i zwiększa liczbę stron o 1
    void AddPage(Page *page);
	// zmienia tytuł książki
    void AddTitle(string title);
	// zmienia nagłówki wszystkich stron książki oprócz strony nr 0
    void AddHeader(string header);
	// jeśli iterator jest mniejszy od liczby stron, dodaje tekst; zwiększa iterator o 1
    void AddText(string text);

	// zwraca tytuł strony
    string getTitle() {return m_title;}

    // dekonstruktor domyślny
    ~Book();
private:
	// tablica stron w książce
    Page* m_pages[100];
	// tytuł książki
    string m_title;
	// autor książki i/lub informacja o tym, czy ksiązka jest kopią
    string m_author;
	// liczba stron
    int m_number;
	// iterator liczący dodane strony
    int m_iterator;
};
