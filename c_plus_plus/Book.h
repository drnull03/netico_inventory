#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include "Product.h"
using namespace std;
class Book : public Product
{
private:
    // properties section
    int pages;
    string bookName;
    string category;

    // hidden methods section

public:
    // constructor section

    Book();
    Book(int p, string n, string c,string na,float pr,string bra,string manu);
    Book(Book &other);

    // setters and getters section

    // setters
    void setPages(int p);
    void setName(int n);
    void setCategory(string c);

    // getters
    int getPages() const;
    string getName() const;
    string getCategory() const;

    // methods section
    bool operator==(Book &) const;
    bool operator!=(Book &) const;
    friend ostream &operator<<(std::ostream &, Book &);
    friend istream &operator>>(std::istream &, Book &);
};

#endif