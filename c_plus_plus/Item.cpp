#include "Item.h"
#include <iostream>

using namespace std;
//Note later other items will iherite form this class

Item::Item():name(""),price(0.0),manufacturer("Unknown"),brand("Unknown"){}
Item::Item(string n,float p,string m,string b):name(n),price(p),manufacturer(m),brand(b){}
Item::Item(Item &other):name(other.name),price(other.price),manufacturer(other.manufacturer),brand(other.brand){}

