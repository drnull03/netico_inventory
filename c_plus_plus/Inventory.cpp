#include "Inventory.h"
#include<iostream>

using namespace std;

//constructor section
Inventory::Inventory():capacity(100),count(0),location(" "){}
Inventory::Inventory(int cap,string loc):capacity(cap), count(0),location(loc){}
Inventory::Inventory(Inventory &other):capacity(other.capacity),count(other.count),location(other.location){}

//setters
void Inventory::setCapacity(int c){capacity=c;}
void Inventory::setCount(int c){count=c;}
void Inventory::setLocation(string l){location=l;}

//getters
int Inventory::getCapacity(){return capacity;}
int Inventory::getCount(){return count;}
string Inventory::getLocation(){return location;}

//deconstructor section
//empty for now
Inventory::~Inventory(){}