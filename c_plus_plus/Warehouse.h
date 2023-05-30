#ifndef Warehouse_H
#define Warehouse_H

#include <iostream>
#include "ProductList.h"

using namespace std;
class Warehouse
{
private:
    // more properties will be added as needed
    // properties section
    string name;
    string location;
    ProductList<Product *> products;

    // hidden methods section

public:
    // constructor section

    Warehouse();
    Warehouse(string loc,string n, ProductList<Product *> &PL);

    // setters and getters section

    // setters

    void setName(string name);
    void setLocation(string l);
    void setList(ProductList<Product *>&l);
    // getters

    string getLocation();
    string getName();
    ProductList<Product *> getList(){return products;}
    // methods section

    friend ostream &operator<<(std::ostream &, Warehouse &);
    ProductList<Product *> &operator+(Product *);
    ProductList<Product *> &operator-(Product *);
};

#endif