#include <iostream>
#include <string>
#include "Book.hpp"
using namespace std;

Book::Book()
{
    digi = false;
    title_name = "";
    author_name = "";
    numb_pages = 0;
}
Book::Book(string title, string author, int pages, bool flag)
{
    title_name = title ;
    author_name = author;
    numb_pages = pages ;
    digi = flag;
}
//sets book title given by input to variable
void Book::setTitle(const string& title)
{
    title_name = title;
}
string Book::getTitle() const
{
    return title_name;
}
//sets author given by input to variable
void Book::setAuthor(const string& author)
{
    author_name = author;
}
//if the input page count is greater than 0, value is set to variable 'num_pages'
void Book::setPageCount(const int& pages)
{
    if (pages > 0)
    {
        numb_pages = pages;
    }
}
void Book::setDigital()
{
    digi = true;
}

string Book::getAuthor() const
{
    return author_name;
}

int Book::getPageCount() const
{
    return numb_pages;
}

bool Book::isDigital() const
{
    if (digi == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
