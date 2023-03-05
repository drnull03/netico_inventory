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
   // Item** items;  this will be added in the future when the item class is done 



//hidden methods section


public:
//constructor section

Inventory();
Inventory(int cap,string loc);
Inventory(Inventory &other);

//setters and getters section
//for now there is no getters and setters because the constructor is sufficiant 


//methods section






//deconstructor section


};






#endif