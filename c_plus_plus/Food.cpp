#include "Food.h"
#include <iostream>
using namespace std;

// constructors
Food::Food() : category("Null"), countryOfOrigin("") {price=0.0;name="Null";brand="";manufacturer="Null";}
Food::Food(string c, string coo,string na,float pr,string bra,string manu) : category(c), countryOfOrigin(coo) {
        name=na;
    price=pr;
    brand=bra;
    manufacturer=manu;
}
Food::Food(Food &other) : category(other.category), countryOfOrigin(other.countryOfOrigin) {
        name=other.name;
    price=other.price;
    brand=other.brand;
    manufacturer=other.manufacturer;
}

// setters
void Food::setCategory(string c) { category = c; }
void Food::setCountryOfOrigin(string coo) { countryOfOrigin = coo; }

// getters
string Food::getCategory() const { return category; }
string Food::getCountryOfOrigin() const { return countryOfOrigin; }

bool Food::operator==(Food &other) const
{
    if (category == other.category && countryOfOrigin == other.countryOfOrigin && countryOfOrigin == other.countryOfOrigin && name==other.name &&price==other.price && brand==other.brand && manufacturer == other.manufacturer)
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
    out << "category:" << F.category << "\t"
        << "countryoforigin:" << F.countryOfOrigin 
         <<"name:"<<F.name << "\t"
        <<"price:" << F.price << "\t"
        << "brand:" << F.brand << "\t"
        <<"manufacturer"<<F.manufacturer<<endl;

    return out;
}

istream &operator>>(std::istream &in, Food &F)
{
    cout << "please enter Food information in the following format category countryoforigin" << endl;

    in >> F.category;

    in >> F.countryOfOrigin;
     in>>F.name;
    in>>F.price;
    in>>F.brand;
    in>>F.manufacturer;

    return in;
}