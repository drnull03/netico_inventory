#include "Product.h"
#include <iostream>
#include "Book.h"
#include "Cloth.h"
#include "Food.h"
#include "Electronic.h"

using namespace std;
// Note later other Products will iherite form this class

// constructor implementation
Product::Product() : price(0.0), type("Unknown"), brand("Unknown") {}
Product::Product(Product &other) : price(other.price), type(other.type), brand(other.brand) {}

// getters and setters

// setters

void Product::setPrice(float P) { price = P; }
void Product::setType(string T) { type = T; }
void Product::setBrand(string B) { brand = B; }

// getters
float Product::getPrice()  { return price; }
string Product::getType()  { return type; }
string Product::getBrand()  { return brand; }

bool Product::operator==(Product &other) 
{
    if (type == other.type && brand == other.brand && price == other.price)
        return true;
    else
        return false;
}

bool Product::operator!=(Product &other) 
{
    return !(*this == other);
}

ostream &operator<<(std::ostream &out, Product &P)
{

         
         if(P.type == "Book"){
            Book *b=dynamic_cast<Book *>(&P);
            out<<*b;
         }
         else if(P.type == "Food"){
            Food *b=dynamic_cast<Food *>(&P);
            out<<*b;
         }
         else if(P.type == "Cloth"){
            Cloth *b=dynamic_cast<Cloth *>(&P);
            out<<*b;
         }
          else if(P.type == "Electronic"){
            Electronic *b=dynamic_cast<Electronic *>(&P);
            out<<*b;
         }

    return out;
}

istream &operator>>(std::istream &in, Product &P)
{
    cout << "please enter Product information in the following format name price type brand quantity" << endl;

    in >> P.price;

    in >> P.type;
    in >> P.brand;
    return in;
}