#include "Cloth.h"
#include <iostream>

using namespace std;

// constructor section
Cloth::Cloth() : quality(-1), material("made of nothing"), type("Null") {
    price=0.0;name="Null";brand="";manufacturer="Null";
}
Cloth::Cloth(int q, string m, string t,string na,float pr,string bra,string manu) : quality(q), material(m), type(t) {
    name=na;
    price=pr;
    brand=bra;
    manufacturer=manu;
}
Cloth::Cloth(Cloth &other) : quality(other.quality), material(other.material), type(other.type) {
    name=other.name;
    price=other.price;
    brand=other.brand;
    manufacturer=other.manufacturer;
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
    if (quality == other.quality && material == other.material && type == other.type && name==other.name &&price==other.price && brand==other.brand && manufacturer == other.manufacturer)
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
    out << "quality:" << C.quality << "\t"
        << "material:" << C.material << "\t"
        << "type:" << C.type << endl
        <<"name:"<<C.name << "\t"
        <<"price:" << C.price << "\t"
        << "brand:" << C.brand << "\t"
        <<"manufacturer"<<C.manufacturer<<endl;

    return out;
}

istream &operator>>(istream &in, Cloth &C)
{
    cout << "please enter Cloth information in the following format quality material type" << endl;

    in >> C.quality;

    in >> C.material;

    in >> C.type;
    in>>C.name;
    in>>C.price;
    in>>C.brand;
    in>>C.manufacturer;

    return in;
}