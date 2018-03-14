#pragma once
#include <string>
#include <iostream>

using namespace std;

class Page
{
public:
    Page(string header = "empty", string text = "empty") : m_header(header), m_text(text) {}
    Page* Copy();
    void Print();

    void AddHeader(string header) {m_header = header;}
    void AddText(string text) {m_text = text;}

    string getHeader() {return m_header;}
    string getText() {return m_text;}
private:
    string m_header;
    string m_text;
};


class Book
{
public:
    Book(string title = "dummy");
    void Print();
    void Copy(Book* book);

    void AddPage(Page *page);
    void AddTitle(string title);
    void AddHeader(string header);
    void AddText(string text);

    string getTitle() {return m_title;}
private:
    Page* m_pages[100];
    string m_title;
    string m_author;
    int m_number;
    int m_iterator;
};



class Catalog
{
public:
    Catalog(string name) : m_name(name), m_number(0) {};
    void AddBook(Book *book) {m_books[m_number] = book; m_number++;}
    void Print();
private:
    string m_name;
    Book* m_books[100];
    int m_number;
};
