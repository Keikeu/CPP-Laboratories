#pragma once

#include "Book.h"
#include <string>

class Book;

using namespace std;

class Catalog
{
public:
	// konstruktor ustawiający nazwę katalogu i zerujący liczbę książek w nim zawartych
    Catalog(string name) : m_name(name), m_number(0) {};
	// metoda dodająca książkę do katalogu
    void AddBook(Book *book) {m_books[m_number] = book; m_number++;}
	// wypisuje nazwę katalogu oraz numer i tytuł każdej książki z katalogu
    void Print();
private:
	// nazwa katalogu
    string m_name;
	// tablica książek zawartych w katalogu
    Book* m_books[100];
	// liczba książek w katalogu
    int m_number;
};
