#ifndef NODE_H
#define NODE_H

#include "Product.h"
class Node
{
private:
    int quantity;
    Node *next;

public:
    Node();
    Node(int q, Node *N):quantity(q),next(N){}
    Node(Node &other);

    void setQuantity(int q);
    void setNext(Node *);

    int getQuantity() const;
    Node *getNext() const;

    bool operator==(Node &other) const;
    bool operator!=(Node &other) const;
    friend ostream &operator<<(std::ostream &, Node &);
   // friend istream &operator>>(std::istream &, Node &);
};

#endif