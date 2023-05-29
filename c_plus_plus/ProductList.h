#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H

#include "Node.h"
#include <iostream>
using namespace std;
template <class T>
class ProductList
{
private:
    Node<T> *head;

public:
    
    friend ostream &operator<<(std::ostream &out, ProductList<T> &PL)
    {
        out << "outputing the list of products:" << endl;
        Node<T>* current=PL.getHead();
        int i=1;
        while(current != NULL){
            out<<"the "<<i<<"th product printing ..."<<endl;
            out<<"Quantity: "<<current->getQuantity()<<endl;
            out<<endl;
            out<<*(current->getProduct())<<endl;
            
            current = current->getNext();
            i++;
        }
        return out;
    }
ProductList<T>& operator=(ProductList<T>& other)
{
   
head = NULL;
        Node<T> *current = other.getHead();
        while (current != NULL)
        {
            add_at(size(), current->getQuantity(), current->getProduct());
            current = current->getNext();
        }


return *this;



}


    ProductList<T>(Node<T> *h) : head(new Node<T>(*h)) {}
    ProductList<T>() : head(NULL) {}
    ProductList<T>(ProductList<T> &other)
    {
      //dumb assign

          head = NULL;
        Node<T> *current = other.getHead();
        while (current != NULL)
        {
            add_at(size(), current->getQuantity(), current->getProduct());
            current = current->getNext();
        }
    }

    void setHead(Node<T> *);
    Node<T> *getHead() ;

    int size();
    void add_at(int index, int quantity, T);
    int index_of(T);
    void remove_at(int);
    Node<T> &operator[](int i);

    ~ProductList<T>()
    {
        int n = this->size();
        for (int i = n-1; i>=0; i--)
        {
            remove_at(i);
        }
    }
};

#endif

template <class T>
void ProductList<T>::setHead(Node<T> *n)
{
    head = n;
}

template <class T>
Node<T> *ProductList<T>::getHead()  
{

    return head;
}

template <class T>
int ProductList<T>::size()
{
    Node<T>* ptr = head;
    int ans = 0;
    while(ptr != NULL)
    {
        ptr = ptr->getNext();
        ans++;
    }
    return ans;
}

template <class T>
void ProductList<T>::add_at(int index, int quantity, T t)
{

    if (head == NULL)
    {
        head = new Node<T>;
        head->setNext(NULL);
        head->setQuantity(quantity);
        head->setProduct(t);
    }
    else if (index == 0)
    {
        // add at first
        Node<T> *temp = new Node<T>;
        temp->setQuantity(quantity);
        temp->setProduct(t);
        temp->setNext(head);
        head = temp;
        return;
    }
    else
    {
        Node<T> *temp = new Node<T>;

        temp->setProduct(t);
        temp->setNext(NULL);
        temp->setQuantity(quantity);
        Node<T> *current = head;
        int i = 0;
        while (current->getNext() != nullptr && i < index)
        {
            i++;
            current = current->getNext();
        }

        Node<T> *n = current->getNext();
        current->setNext(temp);
        temp->setNext(n);
    }
}

template <class T>
int ProductList<T>::index_of(T t)
{

    if(head == NULL)
    {
        //!cout <<"List is empty!\n";
        return -1;
    }
    Node<T>* current = head;
    int j=0;
    while(current != NULL)
    {
        if(current -> getProduct() == t)
        {
            return j;
        }
        current = current->getNext();
        j++;
    }
    //!cout <<"Product not found!\n";
    return -1;
}

template <class T>
void ProductList<T>::remove_at(int index)
{
    Node<T> *current = head;
    if (head == NULL)
    {
        cout << "already an empty list" << endl;
        return;
    }
    int n = this->size();
    if (index + 1 > n)
    {
        cout << "out of range" << endl;
        return;
    }
    else if (n == index + 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            current = current->getNext();
        }
        Node<T> *deltemp = current->getNext();
        current->setNext(NULL);
        delete deltemp;
        return;
    }
    else if (index == 0)
    {
        Node<T> *deltemp = head;

        head = head->getNext();
        delete deltemp;
        return;
    }
    else
    {

        for (int i = 0; i < index - 1; i++)
        {
            current = current->getNext();
        }
        Node<T> *deltemp = current->getNext();
        current->setNext(deltemp->getNext());
        delete deltemp;
        return;
    }
}

template <class T>
Node<T> &ProductList<T>::operator[](int index)
{
    int n = this->size();
    Node<T> *current = head;
    if (head == nullptr)
    {
        cout << "sorry the list is empty" << endl;
        Node<T> *newNode = new Node<T>();
        return *newNode;
    }
    else if (index == 0)
    {
        return *head;
    }
    else if (index > n-1)
    {
        return *head;
    }
    for (int i = 0; i < n; i++)
    {
        current = current->getNext();
    }
    return *current;
}
