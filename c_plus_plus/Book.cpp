#include "Book.h"
#include <iostream>

using namespace std;

// constructor section
Book::Book() : pages(10), bookName("No Name"), category("general")
{
    price = 0.0;
    brand = "Unknown";
    type = "Unknown";
}
Book::Book(int p, string n, string c, float pr, string bra, string manu) : pages(p), bookName(n), category(c)
{
    price = pr;
    brand = bra;
    type = manu;
}
Book::Book(Book &other) : pages(other.pages), bookName(other.bookName), category(other.category)
{
    price = other.price;
    brand = other.brand;
    type = other.type;
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

    if (pages == other.pages && category == other.category && bookName == other.bookName && price == other.price && brand == other.brand && type == other.type)
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
    out << "bookName:" << B.bookName << " *** "
        << "pages:" << B.pages << " *** "
        << "category:" << B.category << " *** "
        << "price:" << B.price << " *** "
        << "brand:" << B.brand << " *** "
        << "type: " << B.type << endl;

    return out;
}

istream &operator>>(istream &in, Book &B)
{
    cout << "please enter BOOK information in the following format (name pages category price brand type)" << endl;

    in >> B.bookName;

    in >> B.pages;

    in >> B.category;
    in >> B.price;
    in >> B.brand;
    in >> B.type;

    return in;
}