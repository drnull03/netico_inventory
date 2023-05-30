#include "Cloth.h"
#include <iostream>

using namespace std;

// constructor section
Cloth::Cloth() : quality(5), material("Unknown")
{
    price = 0.0;
    brand = "Unknown";
    type = "Unknown";
}
Cloth::Cloth(int q, string m, float pr, string bra, string manu) : quality(q), material(m)
{
    price = pr;
    brand = bra;
    type = manu;
}
Cloth::Cloth(Cloth &other) : quality(other.quality), material(other.material)
{
    price = other.price;
    brand = other.brand;
    type = other.type;
}

// setters
void Cloth::setQuality(int q) { quality = q; }
void Cloth::setMaterial(string m) { material = m; }


// getters

string Cloth::getMaterial()  { return material; }


bool Cloth::operator==(Cloth &other) 
{
    if (quality == other.quality && material == other.material  && price == other.price && brand == other.brand && type == other.type)
        return true;
    else
        return false;
}

bool Cloth::operator!=(Cloth &other) 
{

    return !(*this == other);
}

ostream &operator<<(ostream &out, Cloth &C)
{
    out << "printing Cloth information" << endl;
    out << "********************************" << endl;
    out << "quality:" << C.quality << " *** "
        << "material:" << C.material << " *** "
        << "price:" << C.price << " *** "
        << "brand:" << C.brand << " *** "
        << "type:" << C.type << endl;

    return out;
}

istream &operator>>(istream &in, Cloth &C)
{
    cout << "please enter Cloth information in the following format (quality material price brand type)" << endl;

    in >> C.quality;

    in >> C.material;

    in >> C.price;
    in >> C.brand;
    in >> C.type;

    return in;
}