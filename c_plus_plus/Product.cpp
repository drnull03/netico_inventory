#include "Product.h"
#include <iostream>

using namespace std;
//Note later other Products will iherite form this class

Product::Product():name(""),price(0.0),manufacturer("Unknown"),brand("Unknown"){}
Product::Product(string n,float p,string m,string b):name(n),price(p),manufacturer(m),brand(b){}
Product::Product(Product &other):name(other.name),price(other.price),manufacturer(other.manufacturer),brand(other.brand){}

