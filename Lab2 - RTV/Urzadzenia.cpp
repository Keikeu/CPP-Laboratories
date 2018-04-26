#include "Urzadzenia.h"
#include <iostream>

#define DVD OdtwarzaczDVD
#define TV TelewizorLCD


	
void Rzutnik::Wyswietl(const Komputer* urz) const
{
	std::cout << "Polaczono rzutnik i komputer\n";

	for(int i=0; i<m_a; i++)
		std::cout << m_pattern_first;
	std::cout << std::endl;

	for(int i=0; i<m_b; i++)
	{
		for(int j=0; j<m_a; j++)
			std::cout << urz->getLetter();

		std::cout << std::endl;
	}

	for(int i=0; i<m_a/2; i++)
		std::cout << m_pattern_second;
	std::cout << std::endl;


	std::cout << std::endl << std::endl << std::endl;
}




void Rzutnik::Wyswietl(const DVD* urz) const
{
	std::cout << "Polaczono rzutnik i DVD\n";

	for(int i=0; i<m_a; i++)
		std::cout << m_pattern_first;
	std::cout << std::endl;

	for(int i=0; i<m_b; i++)
	{
		for(int j=0; j<m_a; j++)
			std::cout << urz->getLetter();

		std::cout << std::endl;
	}

	for(int i=0; i<m_a/2; i++)
		std::cout << m_pattern_second;
	std::cout << std::endl;


	std::cout << std::endl << std::endl << std::endl;
}


void TV::Wyswietl(const Komputer* urz) const
{
	std::cout << "Polaczono telewizor i komputer\n";

	for(int i=0; i<m_a; i++)
		std::cout << m_pattern_first;
	std::cout << std::endl;

	for(int i=0; i<m_b; i++)
	{
		for(int j=0; j<m_a; j++)
			std::cout << urz->getLetter();

		std::cout << std::endl;
	}

	for(int i=0; i<m_a/2; i++)
		std::cout << m_pattern_second;
	std::cout << std::endl;


	std::cout << std::endl << std::endl << std::endl;
}

void TV::Wyswietl(const DVD* urz) const
{
	std::cout << "Polaczono telewizor i DVD\n";

	for(int i=0; i<m_a; i++)
		std::cout << m_pattern_first;
	std::cout << std::endl;

	for(int i=0; i<m_b; i++)
	{
		for(int j=0; j<m_a; j++)
			std::cout << urz->getLetter();

		std::cout << std::endl;
	}

	for(int i=0; i<m_a/2; i++)
		std::cout << m_pattern_second;
	std::cout << std::endl;

}

