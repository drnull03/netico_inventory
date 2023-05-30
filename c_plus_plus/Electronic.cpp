#include "Electronic.h"
#include <iostream>

using namespace std;

// constructor section
Electronic::Electronic() : size(40)
{
    price = 0.0;
    brand = "Unknown";
    type = "Unknown";
}
Electronic::Electronic(int s, float pr, string bra, string manu) : size(s)
{
    price = pr;
    brand = bra;
    type = manu;
}
Electronic::Electronic(Electronic &other) : size(other.size)
{
    price = other.price;
    brand = other.brand;
    type = other.type;
}
// setters
void Electronic::setSize(int s) { size = s; }
void Electronic::setType(string t) { type = t; }

// getters
int Electronic::getSize()  { return size; }
string Electronic::getType()  { return type; }

bool Electronic::operator==(Electronic &other) 
{
    if (size == other.size && type == other.type && price == other.price && brand == other.brand && type == other.type)
        return true;
    else
        return false;
}

bool Electronic::operator!=(Electronic &other) 
{

    return !(*this == other);
}

ostream &operator<<(std::ostream &out, Electronic &E)
{
    out << "printing Electronic information" << endl;
    out << "********************************" << endl;
    out << "size:" << E.size << " *** "
        << "price:" << E.price << " *** "
        << "brand:" << E.brand << " *** "
        << "type:" << E.type << endl;

    return out;
}

istream &operator>>(std::istream &in, Electronic &E)
{
    cout << "please enter Electronic information in the following format ( size price brand type )" << endl;

    in >> E.size;

    in >> E.price;
    in >> E.brand;
    in >> E.type;

    return in;
}