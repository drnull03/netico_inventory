#ifndef ELECTRO_H
#define ELEVTRO_H

#include <iostream>
#include "Product.h"
using namespace std;
class Electronic : public Product
{
private:
   // properties section

   int size; // from 1 to 100
   

   // hidden methods section

public:
   // constructor section

   Electronic();
   Electronic(int s, float pr, string bra, string manu);
   Electronic(Electronic &other);

   // setters and getters section

   // setters
   void setSize(int s);
   void setType(string t);

   // getters
   int getSize() ;
   string getType() ;

   // methods section
   bool operator==(Electronic &other) ;
   bool operator!=(Electronic &other) ;
   friend ostream &operator<<(std::ostream &, Electronic &);
   friend istream &operator>>(std::istream &, Electronic &);
};

#endif