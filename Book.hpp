#ifndef Book_hpp_
#define Book_hpp_
#include <iostream>
using namespace std;

 

class Book
{
    //private functions
private: 
    string title_name;
    string author_name;
    int numb_pages;
    bool digi;
    
    //public functions 
public:
    //default constructor
    Book();
    //@@@para constructors
    Book(string title, string author, int pages, bool flag = false);
    //************************************************
    //Setters:

    void setDigital();
    
    void setTitle(const string& title);

    void setAuthor(const string& author);

    void setPageCount(const int& pages); //num_pages > 0 since books cant have negative pages
    //Getters:
    string getName() const;

    string getAuthor() const;
    
    int getPageCount() const;

    string getTitle() const;
    
    bool isDigital() const;
    
};
#endif
