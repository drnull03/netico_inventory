#include "Book.h"
#include <iostream>

using namespace std;

// constructor section
Book::Book() : pages(1), bookName("No Name"), category("Null") {price=0.0;name="";brand="";manufacturer="";}
Book::Book(int p, string n, string c,string na,float pr,string bra,string manu) : pages(p), bookName(n), category(c) {
    name=na;
    price=pr;
    brand=bra;
    manufacturer=manu;
}
Book::Book(Book &other) : pages(other.pages), bookName(other.bookName), category(other.category) {
    name=other.name;
    price=other.price;
    brand=other.brand;
    manufacturer=other.manufacturer;
}

// setters
void Book::setPages(int p) { pages = p; }
void Book::setName(int n) { bookName = n; }
void Book::setCategory(string c) { category = c; }

// getters
int Book::getPages() const { return pages; }
string Book::getName() const { return bookName; }
string Book::getCategory() const { return category; }

// methods
bool Book::operator==(Book &other) const
{

    if (pages == other.pages && category == other.category && bookName == other.bookName && name==other.name &&price==other.price && brand==other.brand && manufacturer == other.manufacturer)
        return true;
    else
        return false;
}

bool Book::operator!=(Book &other) const
{
    if (!(*this == other))
        return true;
    else
        return false;
}

ostream &operator<<(std::ostream &out, Book &B)
{
    out << "printing Book information" << endl;
    out << "********************************" << endl;
    out << "bookName:" << B.bookName << "\t"
        << "pages:" << B.pages << "\t"
        << "category:" << B.category << "\t"
        <<"name:"<<B.name << "\t"
        <<"price:" << B.price << "\t"
        << "brand:" << B.brand << "\t"
        <<"manufacturer"<<B.manufacturer<<endl;

    return out;
}

istream &operator>>(istream &in, Book &B)
{
    cout << "please enter BOOK information in the following format name pages category" << endl;

    in >> B.bookName;

    in >> B.pages;

    in >> B.category;
    in>>B.name;
    in>>B.price;
    in>>B.brand;
    in>>B.manufacturer;

    return in;
}