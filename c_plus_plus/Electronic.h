#ifndef ELECTRO_H
#define ELEVTRO_H

#include<iostream>
using namespace std;
class Electronic{
private:

//properties section
    
   int size;//from 1 to 100
   string type;



//hidden methods section


public:
//constructor section

Electronic();
Electronic(int s,string t);
Electronic(Electronic &other);

//setters and getters section

//setters
void setSize(int s);
void setType(string t);

//getters
int getSize();
string getType();



//methods section






//deconstructor section
~Electronic();

};






#endif