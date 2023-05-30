#ifndef PRODUCT_H
#define PRODUCT_H

// NOTEEEE  other classes will inherite this class
#include <iostream>
using namespace std;
class Product
{
protected:
    // more properties will be added as needed
    // properties section
    float price;
    string type;
    string brand;

    // hidden methods section

public:
    // constructor section

    Product();
    Product(float p, string t, string b);
    Product(Product &other);

    // setters and getters section

    // setters

    void setPrice(float P);
    void setType(string T);
    void setBrand(string B);

    // getters

    float getPrice();
    string getType() ;
    string getBrand() ;

    // methods section
    virtual bool operator==(Product &other) ;
    virtual bool operator!=(Product &other);
    friend ostream &operator<<(std::ostream &, Product &);
    friend istream &operator>>(std::istream &, Product &);
};

#endif