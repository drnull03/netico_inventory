#include "Warehouse.h"
#include<iostream>
#include "ProductList.h"
using namespace std;

//constructor section
Warehouse::Warehouse():location(" "),products(){}
Warehouse::Warehouse(string loc,ProductList &PL):location(loc),products(PL){}


//setters

void Warehouse::setLocation(string l){location=l;}

//getters

string Warehouse::getLocation(){return location;}

ProductList& Warehouse::operator+(Product&P){

    int n=products.index_of(P);
    if(n==-1) {
        products.add_at(0,P);
    }else{
Product *current=&products[n];
current->setQuantity(current->getQuantity()+1);
    }
    return products;
}

ProductList& Warehouse::operator-(Product&P){
 int n=products.index_of(P);
    if(n==-1) {
        products.remove_at(n);
    }else{
Product *current=&products[n];
current->setQuantity(current->getQuantity()-1);
    }
    return products;
}



ostream & operator<<(std::ostream &out,Warehouse&wh){


out <<wh.getLocation()<<endl;
out<<"now printing the list of products"<<endl;
out<<wh.products<<endl;

return out;
}