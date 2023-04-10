#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H

#include "Product.h"
#include<iostream>
using namespace std;
class ProductList{
private:
Product *head;


public:

ProductList(Product *h):head(h){}
ProductList() :head(NULL) {}
ProductList(ProductList&other) :head(other.head) {}



int size() ;
void add_at(int, Product& );
int index_of(Product&);
void remove_at(int);
Product &operator[](int i);
friend ostream & operator<<(std::ostream &,ProductList&);


~ProductList(){
int n=this->size();
for(int i=1;i<n;i++){
remove_at(i);

}

}








};

















#endif