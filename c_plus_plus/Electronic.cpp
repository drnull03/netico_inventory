#include "Electronic.h"
#include<iostream>

using namespace std;

//constructor section
Electronic::Electronic():size(-1),type("Null"){}
Electronic::Electronic(int s,string t):size(s),type(t){}
Electronic::Electronic(Electronic &other):size(other.size),type(other.type){}
//setters
void Electronic::setSize(int s){size=s;}
void Electronic::setType(string t){type=t;}


//getters
int Electronic::getSize(){return size;}
string Electronic::getType(){return type;}


//deconstructor section
//empty for now
Electronic::~Electronic(){}