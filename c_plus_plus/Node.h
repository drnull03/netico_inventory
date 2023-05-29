#ifndef NODE_H
#define NODE_H

#include "Product.h"

template <class T>
class Node
{
private:
    int quantity;
    T product;
    Node<T> *next;

public:
    friend ostream &operator<<(std::ostream &out, Node<T> &P)
    {
        out << "printing Node information" << endl;
        out << "********************************" << endl;
        out << "quantity " << P.quantity << endl;
        out << *(P.product);

        return out;
    }
    Node<T>();
    Node<T>(int q, Node<T> *N,T p){ setNode(p, q, N);}
   Node<T>(const Node<T> *other) {setNode(other->data, other->q, NULL);}

    void setNode(T,int,Node<T> *);
    void setQuantity(int q);
    void setNext(Node<T> *);
    void setProduct(T);

    T getProduct() const;
    int getQuantity() const;
    Node<T> *getNext() const;


    bool operator==(Node<T> &other) const;
    bool operator!=(Node<T> &other) const;

    // friend istream &operator>>(std::istream &, Node &);
};

#endif

// constructor implementation
template <class T>
Node<T>::Node() : quantity(1), next(NULL)
{

     //product->setName("Unknown");
T f;
product=f;
quantity=1;
next=NULL;
    
}

// getters and setters

// setters

template <class T>
void Node<T>::setQuantity(int Q) { 
if(Q<0){
    quantity=1;
}else{quantity=Q;}

 }
 template <class T> void Node<T>::setNode(T d, int q, Node<T>* n){
    setProduct(d);
    setQuantity(q);
    setNext(n);

 }
template <class T>
void Node<T>::setNext(Node<T> *N) { next = N; }
template <class T>
void Node<T>::setProduct(T P) { product = P; }
// getters

template <class T>
int Node<T>::getQuantity() const { return quantity; }
template <class T>
Node<T> *Node<T>::getNext() const { return next; }
template <class T>
T Node<T>::getProduct() const { return product; }

template <class T>
bool Node<T>::operator==(Node<T> &other) const
{
    if (other.quantity == quantity && other.next == next && other.product == product)
        return true;
    else
        return false;
}

template <class T>
bool Node<T>::operator!=(Node &other) const
{
    return !(*this == other);
}



/*istream &operator>>(std::istream &in, Product &P)
{
    cout << "please enter Node information in the following format name price manufacturer brand quantity" << endl;


    in >> P.quantity;
    return in;
}*/
