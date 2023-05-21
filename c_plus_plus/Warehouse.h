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

    string location;
    ProductList<Product *> products;

    // hidden methods section

public:
    // constructor section

    Warehouse();
    Warehouse(string loc, ProductList<Product *> &PL);

    // setters and getters section

    // setters

    void setLocation(string l);

    // getters

    string getLocation();

    // methods section

    friend ostream &operator<<(std::ostream &, Warehouse &);
    ProductList<Product *> &operator+(Product *);
    ProductList<Product *> &operator-(Product *);
};

#endif