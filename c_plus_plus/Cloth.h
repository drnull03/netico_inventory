#ifndef CLOTH_H
#define CLOTH_H

#include <iostream>
#include "Product.h"
using namespace std;
class Cloth : public Product
{
private:
    // properties section

    int quality; // from 1 to 10(max quality)
    string material;


    // hidden methods section

public:
    // constructor section

    Cloth();
    Cloth(int q, string m, float pr, string bra, string manu);
    Cloth(Cloth &other);

    // setters and getters section

    // setters
    void setQuality(int q);
    void setMaterial(string m);


    // getters
    int getQuality() ;
    string getMaterial() ;


    // methods section

    bool operator==(Cloth &) ;
    bool operator!=(Cloth &) ;
    friend ostream &operator<<(std::ostream &, Cloth &);
    friend istream &operator>>(std::istream &, Cloth &);
};

#endif