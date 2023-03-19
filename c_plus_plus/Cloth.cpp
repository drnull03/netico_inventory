#include "Cloth.h"
#include<iostream>

using namespace std;

//constructor section
Cloth::Cloth():quality(-1),material("made of nothing"),type("Null"){}
Cloth::Cloth(int q,string m,string t):quality(q), material(m),type(t){}
Cloth::Cloth(Cloth &other):quality(other.quality),material(other.material),type(other.type){}

//setters
void Cloth::setQuality(int q){quality=q;}
void Cloth::setMaterial(string m){material=m;}
void Cloth::setType(string t){type=t;}

//getters
int Cloth::getQuality(){return quality;}
string Cloth::getMaterial(){return material;}
string Cloth::getType(){return type;}

//deconstructor section
//empty for now
Cloth::~Cloth(){}