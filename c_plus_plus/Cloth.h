#ifndef CLOTH_H
#define CLOTH_H

#include<iostream>
using namespace std;
class Cloth{
private:

//properties section
    
    int quality;//from 1 to 10(max quality)
    string material;
   string type;



//hidden methods section


public:
//constructor section

Cloth();
Cloth(int q,string m,string t);
Cloth(Cloth &other);

//setters and getters section

//setters
void setQuality(int q);
void setMaterial(string m);
void setType(string t);

//getters
int getQuality();
string getMaterial();
string getType();



//methods section






//deconstructor section
~Cloth();

};






#endif