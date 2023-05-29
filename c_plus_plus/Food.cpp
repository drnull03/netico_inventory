#include "Food.h"
#include <iostream>
using namespace std;

// constructors
Food::Food() : category("general"), countryOfOrigin("none")
{
    price = 0.0;
    brand = "Unknown";
    manufacturer = "Unknown";
}
Food::Food(string c, string coo,float pr, string bra, string manu) : category(c), countryOfOrigin(coo)
{
    price = pr;
    brand = bra;
    manufacturer = manu;
}
Food::Food(Food &other) : category(other.category), countryOfOrigin(other.countryOfOrigin)
{
    price = other.price;
    brand = other.brand;
    manufacturer = other.manufacturer;
}

// setters
void Food::setCategory(string c) { category = c; }
void Food::setCountryOfOrigin(string coo) { countryOfOrigin = coo; }

// getters
string Food::getCategory() const { return category; }
string Food::getCountryOfOrigin() const { return countryOfOrigin; }

bool Food::operator==(Food &other) const
{
    if (category == other.category && countryOfOrigin == other.countryOfOrigin && countryOfOrigin == other.countryOfOrigin && price == other.price && brand == other.brand && manufacturer == other.manufacturer)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Food::operator!=(Food &other) const
{
    return (!(*this == other));
}

ostream &operator<<(std::ostream &out, Food &F)
{
    out << "printing Food information" << endl;
    out << "********************************" << endl;
    out << "category:" << F.category << " *** "
        << "countryoforigin:" << F.countryOfOrigin<<" *** "
        << "price:" << F.price << " *** "
        << "brand:" << F.brand << " *** "
        << "manufacturer:" << F.manufacturer << endl;

 
    return out;
}

istream &operator>>(std::istream &in, Food &F)
{
    cout << "please enter Food information in the following format category countryoforigin" << endl;

    in >> F.category;

    in >> F.countryOfOrigin;
    in >> F.price;
    in >> F.brand;
    in >> F.manufacturer;

    return in;
}