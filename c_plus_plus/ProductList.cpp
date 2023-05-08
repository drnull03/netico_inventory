#include <iostream>
#include "ProductList.h"

using namespace std;

int ProductList::size()
{
    if (head == NULL)
        return 0;
    Node *temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        temp = temp->getNext();
        count++;
    };

    return count - 1;
}

void ProductList::add_at(int index, Node &t)
{

    if (head == NULL)
    {
        head = new Node(t);
        head->setNext(NULL);
    }
    if (index == 0)
    {
        // add at first
        Node *temp = new Node(t);
        temp->setNext(head);
        head = temp;
    }
    else
    {
        Node *temp = new Node(t);
        Node *current = head;
        int i = 0;
        while (current->getNext() != nullptr && i < index)
        {
            i++;
            current = current->getNext();
        }
        Node *n = current->getNext();
        current->setNext(temp);
        temp->setNext(n);
    }
}

int ProductList::index_of(Node &t)
{

    Node *current = head;
    int i = 0;
    while (current != NULL)
    {
        if (*(current) == t)
        {
            return i;
        }
        i++;
        current = current->getNext();
    }
    return -1;
}

void ProductList::remove_at(int index)
{
    Node *current = head;
    if (head == NULL)
    {
        return;
    }
    int n = this->size();
    if (index + 1 > n)
    {
        return;
    }
    else if (n == index + 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            current = current->getNext();
        }
        Node *deltemp = current->getNext();
        current->setNext(NULL);
        delete deltemp;
        return;
    }
    else if (index == 0)
    {
        Node *deltemp = head;

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
        Node *deltemp = current->getNext();
        current->setNext(deltemp->getNext());
        delete deltemp;
        return;
    }
}

Node &ProductList::operator[](int index)
{
    int n = this->size();
    Node *current = head;
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

ostream &operator<<(std::ostream &out, ProductList &PL)
{
    out << "outputing the list of products:" << endl;

    for (int i = 0; i < PL.size(); i++)
    {
        out << i << " print:" << PL[i] << endl;
    }
    return out;
}
