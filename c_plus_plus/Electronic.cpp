#include "Electronic.h"
#include <iostream>

using namespace std;

// constructor section
Electronic::Electronic() : size(40), type("Unknown type")
{
    price = 0.0;
    brand = "Unknown";
    manufacturer = "Unknown";
}
Electronic::Electronic(int s, string t, float pr, string bra, string manu) : size(s), type(t)
{
    price = pr;
    brand = bra;
    manufacturer = manu;
}
Electronic::Electronic(Electronic &other) : size(other.size), type(other.type)
{
    price = other.price;
    brand = other.brand;
    manufacturer = other.manufacturer;
}
// setters
void Electronic::setSize(int s) { size = s; }
void Electronic::setType(string t) { type = t; }

// getters
int Electronic::getSize() const { return size; }
string Electronic::getType() const { return type; }

bool Electronic::operator==(Electronic &other) const
{
    if (size == other.size && type == other.type && price == other.price && brand == other.brand && manufacturer == other.manufacturer)
        return true;
    else
        return false;
}

bool Electronic::operator!=(Electronic &other) const
{

    return !(*this == other);
}

ostream &operator<<(std::ostream &out, Electronic &E)
{
    out << "printing Electronic information" << endl;
    out << "********************************" << endl;
    out << "size:" << E.size << " *** "
        << "type:" << E.type<<" *** "
        << "price:" << E.price << " *** "
        << "brand:" << E.brand << " *** "
        << "manufacturer:" << E.manufacturer << endl;

    return out;
}

istream &operator>>(std::istream &in, Electronic &E)
{
    cout << "please enter Electronic information in the following format  size type" << endl;

    in >> E.size;

    in >> E.type;
    in >> E.price;
    in >> E.brand;
    in >> E.manufacturer;

    return in;
}