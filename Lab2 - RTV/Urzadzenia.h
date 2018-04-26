#pragma once

#define DVD OdtwarzaczDVD
#define TV TelewizorLCD

// URZĄDZENIA ================

class Komputer
{
public:	
	// prosty konstruktor definiujący domyślny znak danego 'urządzenia'
	Komputer(char letter) : m_letter(letter) {}
	// prosty getter umożliwiający dostęp do domyślnego znaku
	char getLetter() const {return m_letter;}
 
private:
	// znak typowy dla tego urządzenia
	char m_letter;
};


// analogicznie do klasy Komputer
class DVD
{
public:
	DVD(char letter) : m_letter(letter) {}
	char getLetter() const {return m_letter;}

private:
	char m_letter;
};


// WYŚWIETLACZE ===============

class Rzutnik
{
public:
	// konstruktor ustawiający wysokość i szerokość urządzenia
	Rzutnik(int a, int b) : m_a(a), m_b(b) {}
	// metoda wypisująca na ekran kolejno: opis połączenia, górną część ramki, prostokąt o wymiarach 'wyświetlacza' stworzony ze znaku odpowiedniego dla urządzenia, dolną część ramki
	void Wyswietl(const Komputer* urz) const;
	// przeładowanie poprzedniej metody na inny typ 'urządzenia'
	void Wyswietl(const DVD* urz) const;

private:
	// kolejno: szerokość i wysokość urządzenia
	int m_a, m_b;
	// znaki tworzące górną część ramki
	const char* m_pattern_first = "_";
	// znaki tworzące dolną część ramki
	const char* m_pattern_second = "_ ";
};

// analogicznie do klasy Rzutnik
class TV
{
public:
	TV(int a, int b) : m_a(a), m_b(b) {}
	void Wyswietl(const Komputer* urz) const;
	void Wyswietl(const DVD* urz) const;

private:
	int m_a, m_b;
	const char* m_pattern_first = "-";
	const char* m_pattern_second = "- ";
};




