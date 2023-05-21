#include "Warehouse.h"
#include <iostream>

using namespace std;

// constructor section
Warehouse::Warehouse() : location(" "), products() {}
Warehouse::Warehouse(string loc, ProductList<Product *> &PL) : location(loc), products(PL) {}

// setters

void Warehouse::setLocation(string l) { location = l; }

// getters

string Warehouse::getLocation() { return location; }

ProductList<Product *> &Warehouse::operator+(Product *P)
{

    int n = products.index_of(P);
    if (n == -1)
    {
        products.add_at(0,1 , P);
    }
    else
    {
        Node<Product *> *current = &products[n];
        current->setQuantity(current->getQuantity() + 1);
    }
    return products;
}

ProductList<Product *> &Warehouse::operator-(Product *P)
{
    int n = products.index_of(P);
    if (n == -1)
    {
        products.remove_at(n);
    }
    else
    {
        Node<Product *> *current = &products[n];
        current->setQuantity(current->getQuantity() - 1);
    }
    return products;
}
/*
ostream &operator<<(std::ostream &out, Warehouse &wh)
{

    out << wh.getLocation() << endl;
    out << "now printing the list of products" << endl;
    out << wh.products << endl;

    return out;
}*/