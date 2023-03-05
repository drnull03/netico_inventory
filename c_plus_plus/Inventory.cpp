#include "Inventory.h"
#include<iostream>

using namespace std;


Inventory::Inventory():capacity(100),count(0),location(" "){}
Inventory::Inventory(int cap,string loc):capacity(cap), count(0),location(loc){}
Inventory::Inventory(Inventory &other):capacity(other.capacity),count(other.count),location(other.location){}