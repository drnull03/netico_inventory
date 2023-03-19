#ifndef INVENTORY_H
#define INVENTORY_H

#include<iostream>
using namespace std;
class Inventory{
private:
//more properties will be added as needed
//properties section
    int capacity;
    int count;
    string location;
   // Product** products;  this will be added in the future when the item class is done 



//hidden methods section


public:
//constructor section

Inventory();
Inventory(int cap,string loc);
Inventory(Inventory &other);

//setters and getters section

//setters
void setCapacity(int c);
void setCount(int c);
void setLocation(string l);

//getters
int getCapacity();
int getCount();
string getLocation();



//methods section






//deconstructor section
~Inventory();

};






#endif