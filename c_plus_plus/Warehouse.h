#ifndef Warehouse_H
#define Warehouse_H

#include <iostream>
#include "ProductList.h"
#include "Node.h"
using namespace std;
class Warehouse
{
private:
    // more properties will be added as needed
    // properties section

    string location;
    ProductList products;

    // hidden methods section

public:
    // constructor section

    Warehouse();
    Warehouse(string loc, ProductList &PL);

    // setters and getters section

    // setters

    void setLocation(string l);

    // getters

    string getLocation();

    // methods section

    friend ostream &operator<<(std::ostream &, Warehouse &);
    ProductList &operator+(Node &);
    ProductList &operator-(Node &);
};

#endif