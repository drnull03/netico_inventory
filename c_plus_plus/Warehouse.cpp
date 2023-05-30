#include "Warehouse.h"
#include <iostream>

using namespace std;

// constructor section
Warehouse::Warehouse() : location("Unknown"), products(),name("No name") {}
Warehouse::Warehouse(string loc,string n, ProductList<Product *> &PL) : location(loc), products(PL) ,name(n){}

// setters

void Warehouse::setName(string n) {name=n;}
void Warehouse::setLocation(string l) { location = l; }
void Warehouse::setList(ProductList<Product *>&l){
products=l;


}
// getters

string Warehouse::getLocation() { return location; }
string Warehouse::getName() { return name; }

ProductList<Product *> &Warehouse::operator+(Product *P)
{

    int n = products.index_of(P);
    if (n == -1)
    {
       
        products.add_at(0, 1, P);
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
       // products.remove_at(n);
    }
    else
    {
        Node<Product *> *current = &products[n];
        current->setQuantity(current->getQuantity() - 1);
        if(current->getQuantity()==0){
            products.remove_at(n);
        }
    }
    return products;
}

ostream &operator<<(std::ostream &out, Warehouse &wh)
{

    out <<"Location:" <<wh.getLocation() << endl;
    out << "now printing the list of products" << endl;
    out << wh.products << endl;

    return out;
}