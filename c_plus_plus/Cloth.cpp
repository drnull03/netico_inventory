#include "Cloth.h"
#include <iostream>

using namespace std;

// constructor section
Cloth::Cloth() : quality(5), material("Unknown"), type("Unknown")
{
    price = 0.0;
    brand = "Unknown";
    manufacturer = "Unknown";
}
Cloth::Cloth(int q, string m, string t, float pr, string bra, string manu) : quality(q), material(m), type(t)
{
    price = pr;
    brand = bra;
    manufacturer = manu;
}
Cloth::Cloth(Cloth &other) : quality(other.quality), material(other.material), type(other.type)
{
    price = other.price;
    brand = other.brand;
    manufacturer = other.manufacturer;
}

// setters
void Cloth::setQuality(int q) { quality = q; }
void Cloth::setMaterial(string m) { material = m; }
void Cloth::setType(string t) { type = t; }

// getters
int Cloth::getQuality() const { return quality; }
string Cloth::getMaterial() const { return material; }
string Cloth::getType() const { return type; }

bool Cloth::operator==(Cloth &other) const
{
    if (quality == other.quality && material == other.material && type == other.type && price == other.price && brand == other.brand && manufacturer == other.manufacturer)
        return true;
    else
        return false;
}

bool Cloth::operator!=(Cloth &other) const
{

    return !(*this == other);
}

ostream &operator<<(ostream &out, Cloth &C)
{
    out << "printing Cloth information" << endl;
    out << "********************************" << endl;
    out << "quality:" << C.quality << " *** "
        << "material:" << C.material << " *** "
        << "type:" << C.type << " *** "
        << "price:" << C.price << " *** "
        << "brand:" << C.brand << " *** "
        << "manufacturer:" << C.manufacturer << endl;

    return out;
}

istream &operator>>(istream &in, Cloth &C)
{
    cout << "please enter Cloth information in the following format quality material type" << endl;

    in >> C.quality;

    in >> C.material;

    in >> C.type;
    in >> C.price;
    in >> C.brand;
    in >> C.manufacturer;

    return in;
}