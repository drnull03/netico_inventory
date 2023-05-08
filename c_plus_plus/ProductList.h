#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H

#include "Node.h"
#include <iostream>
using namespace std;
class ProductList
{
private:
    Node *head;

public:
    ProductList(Node *h) : head(h) {}
    ProductList() : head(NULL) {}
    ProductList(ProductList &other) : head(other.head) {}

    int size();
    void add_at(int, Node &);
    int index_of(Node &);
    void remove_at(int);
    Node &operator[](int i);
    friend ostream &operator<<(std::ostream &, ProductList &);

    ~ProductList()
    {
        int n = this->size();
        for (int i = 1; i < n; i++)
        {
            remove_at(i);
        }
    }
};

#endif