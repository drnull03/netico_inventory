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
friend ostream &operator<<(std::ostream &out, ProductList<T> &PL){
  out << "outputing the list of products:" << endl;
    int s=PL.size();
    for (int i = 0; i < s; i++)
    {
        out << i << " print:" << PL[i] << endl;
    }
    return out;

}
    ProductList<T>(Node<T> *h) : head(new Node<T>(*h)) {}
    ProductList<T>() : head(NULL) {}
   ProductList<T>(ProductList<T> &other)  {
 if(other.getHead() == NULL)
        head = NULL;
    else
    {
        
        Node<T>* current = other.getHead();
        head->setProduct(other.head->getProduct());
        head->setQuantity(other.head->getQuantity());
        head->setNext(NULL);
        Node<T>* tmp = head;
        current = current->getNext();
        while(current != NULL)
        {
            
            Node<T>* newNode = new Node<T>();
            newNode -> setProduct(current->getProduct());
            newNode -> setQuantity(current->getQuantity());
            tmp->setNext(newNode);
            tmp = tmp->getNext();
            current = current->getNext();
        }
    }

   }

    void setHead(Node<T> *);
    Node<T>* getHead();

    int size();
    void add_at(int index,int quantity, T );
    int index_of(T );
    void remove_at(int);
    Node<T> &operator[](int i);
    

    ~ProductList<T>()
    {
        int n = this->size();
        for (int i = 1; i < n; i++)
        {
            remove_at(i);
        }
    }
    
};


#endif



template<class T>void ProductList<T>::setHead(Node<T>* n)
{
    head = new Node<T>(*n);
    
}

template<class T>Node<T>* ProductList<T>::getHead(){

    return head;
}





template<class T>int ProductList<T>::size()
{
    if (head == NULL)
        return 0;
    Node<T> *temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        temp = temp->getNext();
        count++;
    };

    return count - 1;
}

template<class T>void  ProductList<T>::add_at(int index,int quantity, T t)
{

    if (head == NULL)
    {
        head = new Node<T>;
        head->setNext(NULL);
        head->setQuantity(quantity);
        head->setProduct(t);
        
    }
    if (index == 0)
    {
        // add at first
        Node<T> *temp = new Node<T>;
        temp->setQuantity(quantity);
        temp->setProduct(t);
        temp->setNext(head);
        head = temp;
        return ;
    }
    else
    {
        Node<T>* temp = new Node<T>;
             temp->setQuantity(quantity);
        temp->setProduct(t);
        temp->setNext(NULL);
             temp->setQuantity(quantity);
        temp->setProduct(t);
        temp->setNext(NULL);
        Node<T>* current = head;
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

template<class T>int ProductList<T>::index_of(T t)
{

    Node<T> *current = head;
    int i = 0;
    while (current != NULL)
    {
        if (*(current->getProduct()) == *t)
        {
            return i;
        }
        i++;
        current = current->getNext();
    }
    cout <<"Product not found!\n";
    return -1;
}

template<class T>void ProductList<T>::remove_at(int index)
{
    Node<T> *current = head;
    if (head == NULL)
    {   cout<<"already an empty list"<<endl;
        return;
    }
    int n = this->size();
    if (index + 1 > n)
    {   cout<<"out of range"<<endl;
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

template<class T>Node<T>& ProductList<T>::operator[](int index)
{
    int n = this->size();
    Node<T> *current = head;
    if(head== nullptr){
        cout<<"sorry the list is empty"<<endl;
        Node<T>* newNode = new Node<T>();
        return *newNode;
    }
    if (index == 0)
    {
        return *head;
    }
    if (index > n)
    {
        return *head;
    }
    for (int i = 0; i < n; i++)
    {
        current = current->getNext();
    }
    return *current;
}



