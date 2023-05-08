#include "Product.h"
#include <iostream>

using namespace std;
// Note later other Products will iherite form this class

// constructor implementation
Product::Product() : name(""), price(0.0), manufacturer("Unknown"), brand("Unknown") {}
Product::Product(string n, float p, string m, string b) : name(n), price(p), manufacturer(m), brand(b) {}
Product::Product(Product &other) : name(other.name), price(other.price), manufacturer(other.manufacturer), brand(other.brand){}

// getters and setters

// setters
void Product::setName(string N) { name = N; }
void Product::setPrice(float P) { price = P; }
void Product::setManufacturer(string M) { manufacturer = M; }
void Product::setBrand(string B) { brand = B; }

// getters
string Product::getName() const { return name; }
float Product::getPrice() const { return price; }
string Product::getManufacturer() const { return manufacturer; }
string Product::getBrand() const { return brand; }


bool Product::operator==(Product &other) const
{
    if (name == other.name && manufacturer == other.manufacturer && brand == other.brand && price == other.price)
        return true;
    else
        return false;
}

bool Product::operator!=(Product &other) const
{
    return !(*this == other);
}

ostream &operator<<(std::ostream &out, Product &P)
{
    out << "printing Product information" << endl;
    out << "********************************" << endl;
    out << "name:" << P.name << "\t"
        << "price:" << P.price << "\t"
        << "manufacturer:" << P.manufacturer << "\t"
        << "Brand:" << P.brand << endl;

    return out;
}

istream &operator>>(std::istream &in, Product &P)
{
    cout << "please enter Product information in the following format name price manufacturer brand quantity" << endl;

    in >> P.name;

    in >> P.price;

    in >> P.manufacturer;
    in >> P.brand;
    return in;
}