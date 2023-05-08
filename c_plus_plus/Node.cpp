#include "Node.h"
#include <iostream>

using namespace std;

// constructor implementation
Node::Node() : quantity(0), next(NULL) {}

Node::Node(Node &other) :  quantity(other.quantity), next(other.next) {}

// getters and setters

// setters

void Node::setQuantity(int Q) { quantity = Q; }
void Node::setNext(Node *N) { next = N; }
// getters

int Node::getQuantity() const { return quantity; }
Node *Node::getNext() const { return next; }

bool Node::operator==(Node &other) const
{
    if (other.quantity == quantity && other.next == next)
        return true;
    else
        return false;
}

bool Node::operator!=(Node &other) const
{
    return !(*this == other);
}

ostream &operator<<(std::ostream &out, Node &P)
{
    out << "printing Node information" << endl;
    out << "********************************" << endl;
    out<<"quantity"<<P.quantity << endl;

    return out;
}

/*istream &operator>>(std::istream &in, Product &P)
{
    cout << "please enter Node information in the following format name price manufacturer brand quantity" << endl;

    
    in >> P.quantity;
    return in;
}*/