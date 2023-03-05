#ifndef ITEM_H
#define ITEM_H

//NOTEEEE  other classes will inherite this class 
#include<iostream>
using namespace std;
class Item{
private:
//more properties will be added as needed
//properties section
    string name;
    float price;
    string manufacturer;
    string brand;



//hidden methods section


public:
//constructor section

Item();
Item(string n,float p,string m,string b);
Item(Item &other);

//setters and getters section
//for now there is no getters and setters because the constructor is sufficiant 


//methods section






//deconstructor section


};

















#endif