#pragma once

#include "Main.h"
#include <string>

using namespace std;

class Page
{
public:
	// konstruktor nadający stronie domyślny nagłówek i treść ("empty")
    Page(string header = "empty", string text = "empty") : m_header(header), m_text(text) {}
	// zwraca nowo utworzoną kopię obiektu
    Page* Copy();
	// wypisuje na ekran nagłówek i treść strony
    void Print();

	// metoda zmieniająca nazwę nagłówka strony
    void AddHeader(string header) {m_header = header;}

	// metoda zmieniająca treść strony
    void AddText(string text) {m_text = text;}

	// metoda umożliwiająca innym klasom dostęp do nagłówka
    string getHeader() {return m_header;}
	// metoda umożliwiająca innym klasom dostęp do treści
    string getText() {return m_text;}
private:
	// nagłówek strony
    string m_header;
	// treść strony
    string m_text;
};
